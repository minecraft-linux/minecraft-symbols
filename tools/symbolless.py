import os
import json

def hash(str):
    ret = 2166136261
    for b in str:
        ret = ret ^ ord(b)
        ret = (ret * 16777619) & 0xffffffff
    return ret

def generate_version_data(output, gen_vtables):
    sl_data_dir = "../src/minecraft/symbolless/"
    if not os.path.exists(sl_data_dir):
        output("static VersionData version_data[] = {};")
        return
    output("static VersionData::Symbol _empty_symbol_bucket[] = {{nullptr,0}};")
    output("static VersionData version_data[] = {")
    for file in sorted(os.listdir(sl_data_dir)):
        if not file.endswith(".json"):
            continue
        with open(os.path.join(sl_data_dir, file), "r") as f:
            data = json.load(f)

        output("    {")
        output("        " + ", ".join([str(x) for x in data["version"]]) + ",")
        output("        " + data["signature"]["version_code_addr"] + ", " +
               str(data["signature"]["version_code_value"]) + ",")
        symbol_buckets = [[] for i in range(0, int(len(data["symbols"]) * 0.75 / 2 + 0.5) * 2 + 1)]
        for k, v in data["symbols"].items():
            shash = hash(k)
            symbol_buckets[shash % len(symbol_buckets)].append(f"{{\"{k}\", {v}}}")
        for b in symbol_buckets:
            if len(b) > 0:
                b.append("{nullptr,0}")
        def wrap_bucket_str(b):
            if len(b) > 0:
                return "(VersionData::Symbol[]){" + ",".join(b) + "}"
            return "_empty_symbol_bucket"
        symbol_buckets_str = ",".join(wrap_bucket_str(l) for l in symbol_buckets)
        output("        " + str(len(symbol_buckets)) + ", (VersionData::SymbolBucket[]) {" + symbol_buckets_str + "},")
        vt_str = ""
        for vt_name, vt_funcs in data["vtables"].items():
            gen_funcs = gen_vtables[vt_name]
            for f, val in vt_funcs.items():
                vt_str += f"{{&{gen_funcs[f]},{val}}},"
        output("        (VersionData::VtableEntry[]) {" + vt_str + "{nullptr,0}}")
        output("    },")

    output("};")

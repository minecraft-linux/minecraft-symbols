#pragma once

#include <cstddef>
#include <minecraft/symbols.h>

struct VersionData {
    struct Symbol {
        const char *name;
        size_t val;
    };
    using SymbolBucket = Symbol*;

    struct VtableEntry {
        int *what;
        int value;
    };

    int major, minor, patch, revision;
    size_t version_code_addr;
    unsigned int version_code;
    int symbol_bucket_count;
    SymbolBucket *symbol_buckets;
    VtableEntry *vtables;
};

VersionData *find_version_data(VersionData *versions, int nversions, void *handle);
void set_current_version_data(VersionData *vd);
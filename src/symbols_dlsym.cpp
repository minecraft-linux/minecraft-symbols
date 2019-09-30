#include "symbols_internal.h"

#include <cstring>
#include <hybris/dlfcn.h>
#include <stdexcept>
#include <minecraft/legacy/SharedConstants.h>
#include <minecraft/SharedConstants.h>
extern "C" {
#include <hybris/jb/linker.h>
}

static VersionData *current_version_data;
VersionData *find_version_data(VersionData *versions, int nversions, void *handle) {
    soinfo *si = (soinfo *) handle;
    for (int i = 0; i < nversions; i++) {
        if (versions[i].version_code_addr > si->size)
            continue;
        if (*(unsigned int *) (si->base + versions[i].version_code_addr) == versions[i].version_code) {
            return &versions[i];
        }
    }
    return nullptr;
}
void set_current_version_data(VersionData *vd) {
    current_version_data = vd;
    if (!vd)
        return;
    for (auto vt = vd->vtables; vt->what; vt++)
        *vt->what = vt->value;
}
static unsigned int minecraft_dlsym_hash(const char *sym) {
    unsigned int ret = 2166136261u;
    for ( ; *sym; sym++) {
        ret = ret ^ *sym;
        ret = (ret * 16777619) & 0xffffffff;
    }
    return ret;
}
void *minecraft_dlsym(void *handle, const char *sym) {
    if (current_version_data != nullptr) {
        auto hash = minecraft_dlsym_hash(sym);
        auto b = current_version_data->symbol_buckets[hash % current_version_data->symbol_bucket_count];
        for ( ; b->name; b++)
            if (!strcmp(b->name, sym))
                return (void *) (((soinfo *) handle)->base + b->val);
    }
    return hybris_dlsym(handle, sym);
}
void minecraft_get_version(int *major, int *minor, int *patch, int *revision) {
    if (current_version_data != nullptr) {
        *major = current_version_data->major;
        *minor = current_version_data->minor;
        *patch = current_version_data->patch;
        *revision = current_version_data->revision;
        return;
    }
    if (SharedConstants::MajorVersion && SharedConstants::MinorVersion && SharedConstants::PatchVersion) {
        *major = *SharedConstants::MajorVersion;
        *minor = *SharedConstants::MinorVersion;
        *patch = *SharedConstants::PatchVersion;
        if (SharedConstants::RevisionVersion)
            *revision = *SharedConstants::RevisionVersion;
        else if (Legacy::Pre_0_17::SharedConstants::BetaVersion)
            *revision = *Legacy::Pre_0_17::SharedConstants::BetaVersion;
        else
            *revision = 0;
        return;
    }
    throw std::runtime_error("Found no way to resolve library version, Minecraft version likely unsupported");
}

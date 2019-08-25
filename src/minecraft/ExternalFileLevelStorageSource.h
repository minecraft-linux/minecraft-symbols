#pragma once

#include <memory>
#include "std/string.h"
#include "SaveTransactionManager.h"
#include "ContentIdentity.h"
namespace Core { class FilePathManager; }
class Scheduler;
class IContentKeyProvider;

class LevelStorage {
public:
    virtual ~LevelStorage() = 0;
};

struct ExternalFileLevelStorageSource {

public:
    char filler[0x10];

    /// @symbol _ZN30ExternalFileLevelStorageSourceC2EPN4Core15FilePathManagerESt10shared_ptrI22SaveTransactionManagerE
    ExternalFileLevelStorageSource(Core::FilePathManager*, std::shared_ptr<SaveTransactionManager>);

    /// @symbol _ZN30ExternalFileLevelStorageSource18createLevelStorageER9SchedulerRKSsRK15ContentIdentityRK19IContentKeyProvider
    std::unique_ptr<LevelStorage> createLevelStorage(Scheduler&, mcpe::string const&, ContentIdentity const&, IContentKeyProvider const&);

};
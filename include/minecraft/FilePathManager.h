#pragma once

#include "legacy/Core.h"
#include "std/string.h"

namespace Core {

class FilePathManager {

public:

    char filler[0x20];

    /// @symbol _ZN4Core15FilePathManagerC2ERKNS_4PathEb
    FilePathManager(Legacy::Pre_1_13::Core::Path const&, bool);

    const mcpe::string &getRootPath() const;

    const mcpe::string &getUserDataPath() const;

    const mcpe::string &getWorldsPath() const;

    /// @symbol _ZN4Core15FilePathManager14setPackagePathERKNS_4PathE
    void setPackagePath(Legacy::Pre_1_13::Core::Path const&);
    const mcpe::string &getPackagePath() const;

    /// @symbol _ZN4Core15FilePathManager15setSettingsPathERKNS_4PathE
    void setSettingsPath(Legacy::Pre_1_13::Core::Path const&);
    const mcpe::string &getSettingsPath() const;

};

}
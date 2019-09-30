#pragma once

#include "std/string.h"
class Vec2;

class AppPlatform {

public:
    /// @symbol _ZTV11AppPlatform
    static void** myVtable;

    /// @symbol _ZN14ServiceLocatorI11AppPlatformE15mDefaultServiceE
    static AppPlatform** instance;

    struct HardwareInformation {
        mcpe::string deviceModel;
    };

    void** vtable;
    char filler[0xA0 - sizeof(void**)];
    // A0
    int hardwareTier;
    char filler2[0x1000];

    AppPlatform();

    void _fireAppFocusGained();

    void initialize();

    void teardown();

    /// @symbol _ZN11AppPlatform12showKeyboardERKSsibbbiRKN3glm5tvec2IfLNS2_9precisionE0EEE
    void showKeyboard(mcpe::string const&, int, bool, bool, bool, int, Vec2 const&);

    void hideKeyboard();

    bool isKeyboardVisible();

    AppPlatform::HardwareInformation& getHardwareInformation() const;

};

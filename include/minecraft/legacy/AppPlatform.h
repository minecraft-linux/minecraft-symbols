#pragma once

#include "../std/string.h"

struct Vec2;

namespace Legacy {

namespace Pre_1_2_13 {

class AppPlatform {

public:
    /// @symbol _ZN11AppPlatform12showKeyboardERKSsibbbiRK4Vec2
    void showKeyboard(mcpe::string const&, int, bool, bool, bool, int, Vec2 const&);


};

}

namespace Pre_1_2_10 {

class AppPlatform {

public:
    /// @symbol _ZN11AppPlatform12showKeyboardERKSsibbbRK4Vec2
    void showKeyboard(mcpe::string const&, int, bool, bool, bool, Vec2 const&);


};

}

}
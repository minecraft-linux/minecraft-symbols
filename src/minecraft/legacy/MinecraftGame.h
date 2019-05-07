#pragma once

#include "../std/string.h"
#include "../MinecraftGame.h"

namespace Legacy {

namespace Pre_1_2_10 {

class MinecraftGame {

public:
    /// @symbol _ZN13MinecraftGame14setTextboxTextERKSs
    void setTextboxText(mcpe::string const&);

};

}

namespace Pre_1_2 {

class MinecraftGame {

public:
    /// @symbol _ZN13MinecraftGame10getOptionsEv
    Options* getOptions();

};

}

namespace Pre_1_1 {

class MinecraftClient : public ::App {

public:
    char filer[0x4000];

    /// @symbol _ZN15MinecraftClientC2EiPPc
    MinecraftClient(int carg, char** args);

    /// @symbol _ZN15MinecraftClientD2Ev
    ~MinecraftClient();

    /// @symbol _ZN15MinecraftClient14setTextboxTextERKSs
    void setTextboxText(mcpe::string const&);

    /// @symbol _ZN15MinecraftClient10getOptionsEv
    Options* getOptions();

};

}

}
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

}
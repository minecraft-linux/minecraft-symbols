#pragma once

#include "../std/string.h"
#include <vector>
#include "../Keyboard.h"

namespace Legacy {

namespace Pre_1_2 {

class Keyboard {

public:
    struct InputEvent {
        int event;
        unsigned int key;
        InputEvent(::Keyboard::InputEvent const& ev) : event(ev.event), key(ev.key) {}
    };

    /// @symbol _ZN8Keyboard7_inputsE
    static std::vector<Legacy::Pre_1_2::Keyboard::InputEvent>* _inputs;

};

}

}
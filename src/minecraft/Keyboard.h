#pragma once

#include "std/string.h"
#include <vector>

class Keyboard {

public:
    struct InputEvent {
        int event;
        unsigned int key; // it's actually an unsigned char, but the asm code does suspicious stuff with the padding so use an int so it gets zeroed out
        int controllerId;
    };

    static void feedText(mcpe::string const&, bool, unsigned char);

    static int* _states;
    static std::vector<Keyboard::InputEvent>* _inputs;
    static int* _gameControllerId;
    static std::vector<int>* _inputCaretLocation;

};
#pragma once
#include "../std/string.h"
#include <string>

namespace Legacy {

namespace Pre_1_13 {

namespace Core {

struct Path {

    Path(const std::string & s) {
        path = s.c_str();
        size = s.length();
    }

    Path(const mcpe::string & s) {
        path = s.c_str();
        size = s.length();
    }

    const char *path;
    size_t size;

};

}

}

};
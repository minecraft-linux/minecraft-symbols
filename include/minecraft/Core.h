#pragma once

#include "std/string.h"
#include <cstdlib>

namespace Core {

struct Path {
    mcpe::string path;
};

struct PathBuffer {
    mcpe::string path;
    size_t size;

    PathBuffer(const mcpe::string & str) {
        path = str;
        size = str.length();
    }
};

}
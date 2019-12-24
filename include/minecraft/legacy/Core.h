#pragma once
#include "../std/string.h"
#include <string>

namespace Legacy {

namespace Pre_1_14 {

namespace Core {

struct Path {

    const char* path;
    bool hasSize;
    size_t size;

};
}

}

namespace Pre_1_13 {

namespace Core {

struct Path {

    const char *path;
    size_t size;

};

}

}

};
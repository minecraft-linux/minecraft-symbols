#pragma once

#include "../std/string.h"

namespace Legacy {
namespace Pre_0_14 {

enum class TextureFormat {
    U8888
};
struct ImageData {
    int w, h;
    mcpe::string data;
    TextureFormat format;
    int mipLevel;
};

}
}
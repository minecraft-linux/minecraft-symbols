#pragma once

#include "std/string.h"
#include "std/function.h"

#include "Resource.h"

class AppResourceLoader : public ResourceLoader {

private:
    char filler[0x14];

public:
    /// @symbol _ZN17AppResourceLoaderC2ESt8functionIFSsvEE
    AppResourceLoader(mcpe::function<mcpe::string ()>);

};
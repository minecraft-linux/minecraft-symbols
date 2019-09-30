#pragma once

#include "std/string.h"
#include "std/function.h"

#include "Core.h"
#include "Resource.h"

class AppResourceLoader : public ResourceLoader {

private:
    char filler[0x14];

public:
    /// @symbol _ZN17AppResourceLoaderC1ESt8functionIFN4Core10PathBufferISsEEvEE
    AppResourceLoader(mcpe::function<Core::PathBuffer ()>);

};
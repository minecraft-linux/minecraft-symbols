#pragma once

#include "std/string.h"

class AppPlatform;
struct AppContext {
    char filler[0x10];
    AppPlatform* platform;
    bool doRender;
};

class App {

public:
    void** vtable;

    void init(AppContext& ctx);

    /// @vtable App _ZN3App4quitERKSsS1_
    void quit(mcpe::string const&, mcpe::string const&);

    /// @vtable App _ZN3App6updateEv
    void update();

    /// @vtable App _ZN3App16setRenderingSizeEii
    void setRenderingSize(int, int);

    /// @vtable App _ZN3App17setUISizeAndScaleEiif
    void setUISizeAndScale(int, int, float);

    /// @vtable App _ZN3App10wantToQuitEv
    bool wantToQuit();

};
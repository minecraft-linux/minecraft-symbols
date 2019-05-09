#pragma once

namespace Legacy {

namespace Pre_1_8 {

class App {

public:
    void** vtable;

    /// @vtable App _ZN3App4quitEv
    void quit();

};

}


namespace Pre_0_15 {

class App {

public:
    void** vtable;

    /// @vtable App _ZN3App7setSizeEiif
    void setSize(int, int, float);

};

}

}
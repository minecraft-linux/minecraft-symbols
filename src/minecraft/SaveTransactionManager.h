#pragma once

#include "std/function.h"

class SaveTransactionManager {

public:
    char filler[0x10];

    /// @symbol _ZN22SaveTransactionManagerC2ESt8functionIFvbEE
    SaveTransactionManager(mcpe::function<void (bool)>);

};
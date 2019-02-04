#pragma once

#include <vector>
#include "std/string.h"

struct ProductInfo {
    mcpe::string id;
    mcpe::string price;
    mcpe::string currencyCode;
    mcpe::string unformattedPrice;
};


struct StoreListener {

    void** vtable;

    /// @vtable GameStore _ZN9GameStore18onStoreInitializedEb
    void onStoreInitialized(bool);

    /// @vtable GameStore _ZN9GameStore22onQueryProductsSuccessERKSt6vectorI11ProductInfoSaIS1_EE
    void onQueryProductsSuccess(std::vector<ProductInfo> const&);

};
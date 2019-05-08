#pragma once

#include "../Store.h"

namespace Legacy {

namespace Pre_1_2 {

struct ProductInfo {
    mcpe::string id;
    mcpe::string price;
};


struct StoreListener {

    void **vtable;

    /// @vtable GameStore _ZN9GameStore22onQueryProductsSuccessERKSt6vectorI7ProductSaIS1_EE
    void onQueryProductsSuccess(std::vector<ProductInfo> const&);

};

}

}
#pragma once

#include <memory>
#include <vector>
#include "../std/string.h"
#include "../Xbox.h"

namespace Legacy {

namespace Pre_1_8 {

namespace xbox {
namespace services {

struct local_config {

    void** vtable;

    /// @vtable xbox::services::local_config _ZN4xbox8services12local_config28get_value_from_local_storageERKSs
    mcpe::string get_value_from_local_storage(mcpe::string const& value);

};

}
}

}

namespace Pre_1_4 {

namespace xbox {
namespace services {
namespace system {
struct auth_manager {

    /// @symbol _ZN4xbox8services6system12auth_manager25get_auth_manager_instanceEv
    static std::shared_ptr<Legacy::Pre_1_4::xbox::services::system::auth_manager> get_auth_manager_instance();

    /// @symbol _ZN4xbox8services6system12auth_manager14set_rps_ticketERKSs
    void set_rps_ticket(mcpe::string const&);
    /// @symbol _ZN4xbox8services6system12auth_manager23initialize_default_nsalEv
    ::pplx::task_xbox_live_result_void initialize_default_nsal();
    /// @symbol _ZN4xbox8services6system12auth_manager21initialize_title_nsalERKSs
    ::pplx::task_xbox_live_result_void initialize_title_nsal(mcpe::string const&);
    /// @symbol _ZN4xbox8services6system12auth_manager32internal_get_token_and_signatureESsRKSsS4_SsRKSt6vectorIhSaIhEEbbS4_
    ::pplx::task_xbox_live_result_token_and_signature_result internal_get_token_and_signature(mcpe::string, mcpe::string const&, mcpe::string const&, mcpe::string, std::vector<unsigned char> const&, bool, bool, mcpe::string const&);
    /// @symbol _ZN4xbox8services6system12auth_manager15get_auth_configEv
    std::shared_ptr<::xbox::services::system::auth_config> get_auth_config();

};
}
}
}

}

namespace Pre_1_2_3 {

namespace xbox {
namespace services {
namespace system {
struct auth_flow_result;
    struct token_and_signature_result;
}
}
}

namespace pplx {

struct task_completion_event_auth_flow_result {
    char filler[0xc]; // shared_ptr

    /// @symbol _ZNK4pplx21task_completion_eventIN4xbox8services6system16auth_flow_resultEE3setES4_
    void set(Legacy::Pre_1_2_3::xbox::services::system::auth_flow_result);
};
struct task_xbox_live_result_token_and_signature_result {
    std::shared_ptr<::pplx::task_impl> impl;

    /// @symbol _ZNK4pplx4taskIN4xbox8services16xbox_live_resultINS2_6system26token_and_signature_resultEEEE3getEv
    ::xbox::services::xbox_live_result<Legacy::Pre_1_2_3::xbox::services::system::token_and_signature_result> get();
};

}

namespace xbox {
namespace services {
namespace system {

struct auth_flow_result {
    int code;
    mcpe::string s1, xbox_user_id, gamertag, age_group, privileges, cid, event_token;
};

struct token_and_signature_result {
    mcpe::string token, signature, xbox_user_id, gamertag, xbox_user_hash, age_group, privileges, web_account_id, reserved;
};

struct auth_manager {

    /// @symbol _ZN4xbox8services6system12auth_manager25get_auth_manager_instanceEv
    static std::shared_ptr<Legacy::Pre_1_2_3::xbox::services::system::auth_manager> get_auth_manager_instance();

    /// @symbol _ZN4xbox8services6system12auth_manager14set_rps_ticketERKSs
    void set_rps_ticket(mcpe::string const&);
    /// @symbol _ZN4xbox8services6system12auth_manager23initialize_default_nsalEv
    ::pplx::task_xbox_live_result_void initialize_default_nsal();
    /// @symbol _ZN4xbox8services6system12auth_manager21initialize_title_nsalERKSs
    ::pplx::task_xbox_live_result_void initialize_title_nsal(mcpe::string const&);
    /// @symbol _ZN4xbox8services6system12auth_manager32internal_get_token_and_signatureESsRKSsS4_SsRKSt6vectorIhSaIhEEbbS4_
    Legacy::Pre_1_2_3::pplx::task_xbox_live_result_token_and_signature_result internal_get_token_and_signature(mcpe::string, mcpe::string const&, mcpe::string const&, mcpe::string, std::vector<unsigned char> const&, bool, bool, mcpe::string const&);
    /// @symbol _ZN4xbox8services6system12auth_manager15get_auth_configEv
    std::shared_ptr<::xbox::services::system::auth_config> get_auth_config();

};


struct user_auth_android {

    /// @symbol _ZN4xbox8services6system17user_auth_android12get_instanceEv
    static std::shared_ptr<Legacy::Pre_1_2_3::xbox::services::system::user_auth_android> get_instance();

    char filler[0x8]; // 8
    mcpe::string xbox_user_id; // c
    char filler2[0x18-0xc]; // 18
    mcpe::string cid; // 1c
    char filler3[0x48-0x1c];
    pplx::task_completion_event_auth_flow_result auth_flow_event;
    char filler4[0x74-0x48-0xc];
    system::auth_flow_result auth_flow_result;


};

}
}
}

}

}
#include <eosiolib/eosio.hpp>

using namespace eosio;

class bzhhello : public eosio::contract {
public:
    using contract::contract;

    /// @abi action
    void hi(account_name user) {
        require_auth(user);
        print("Hello Bzh, ", name{user});
    }
};

EOSIO_ABI(bzhhello, (hi))

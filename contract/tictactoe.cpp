#include <eosio/eosio.hpp>

using namespace eosio;

CONTRACT tictactoe : contract 
{
    public:
        using contract::contract;

        ACTION welcome(name host, name opponent)
        {
            require_auth(get_self());
            print("Welcome, challengers ", host, " and ", opponent, "!");
        }

};
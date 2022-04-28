
#include "Player.hpp"
#include <string.h>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
namespace coup{
    Player::Player(string name,int coins,string role){
        this->_name=name;
        this->_coins=coins;
        this->_role=role;
    }
    
    Player::Player(){
        this->_name="nadav";
        this->_coins=10;
        this->_role="Captain";
    }
    Player::~Player(){
        ;
    }
    void coup(Player name){
        ;
    }
}





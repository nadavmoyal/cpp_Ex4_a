#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace std;

namespace coup{

class Captain : public Player {
private:
    int _coins;
    Game _game;
    string _name;
public:
    
    Captain(Game game,string name);
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    int coins(){return _coins;}
    void block( Player name);
    void steal(Player name);
    void coup( Player name);

};
}
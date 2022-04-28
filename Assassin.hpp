#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace std;

namespace coup{
class Assassin : public Player {
private:
    Game _game;
    string _name;
    int _coins;
public:
    Assassin(Game game,string name);
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    int coins(){return _coins;}
    void coup( coup::Player name);
    
    };

    
    };
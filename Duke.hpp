#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string.h>
using namespace std;
namespace coup{

class Duke : public Player {
private:
    Game _game;
    string _name;
    int _coins;
public:
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    void tax(){_coins+=3;}
    int coins(){return _coins;}
    void block(Player name);
    Duke(Game game,string name);
    void coup(Player name);

    };
};
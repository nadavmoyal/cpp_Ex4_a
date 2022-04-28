#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;

namespace coup{
class Ambassador : public Player {
private:
    int _coins;
    Game _game;
    string _name;
public:
    Ambassador(Game game,string name);
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    int coins(){return _coins;}
    void coup(Player name);
    void transfer(Player p1,Player p2);

};

};
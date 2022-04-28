
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;
namespace coup{

class Contessa : public Player {
private:
    Game _game;
    int _coins;
    string _name;

public:
    Contessa(Game game,string name);
    void income(){_coins++;}
    void foreign_aid(){_coins+=2;}
    int coins(){return _coins;}   
    void coup(Player name);
    void block(Player name);


};

};
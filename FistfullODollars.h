#ifndef FirstfullODollars_H
#define FirstfullODollars_H
#include "Player.h"
#include <iostream>
#include <string>
class Firstfull0Dollars : public Player {
    private:
        char Firstfull0Dollars_move;
        int move_order;
        std::string Firstfull0Dollars_name;
    public:
        Firstfull0Dollars();
        char return_move();
        void makeMove();
        std::string Return_player_name();

};
#endif
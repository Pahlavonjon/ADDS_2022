#ifndef FistfullODollars_H
#define FistfullODollars_H
#include "Player.h"
#include <iostream>
#include <string>
class FistfullODollars : public Player {
    private:
        char FistfullODollars_move;
        int move_order;
        std::string FistfullODollars_name;
    public:
        FistfullODollars();
        char return_move();
        void makeMove();
        std::string Return_player_name();

};
#endif
#ifndef FirstfullODollars_H
#define FirstfullODollars_H
#include "Player.h"
#include <iostream>
#include <string>
class FirstfullODollars : public Player {
    private:
        char FirstfullODollars_move;
        int move_order;
        std::string FirstfullODollars_name;
    public:
        FirstfullODollars();
        char return_move();
        void makeMove();
        std::string Return_player_name();

};
#endif
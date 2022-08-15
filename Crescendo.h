#ifndef Crescendo_H
#define Crescendo_H
#include "Player.h"
#include <iostream>
#include <string>
class Crescendo : public Player {
    private:
        char Crescendo_move;
        int move_order;
        std::string Crescendo_name;
        int move_number;
    public:
        Crescendo();
        char return_move();
        void makeMove();
        std::string Return_player_name();

};
#endif
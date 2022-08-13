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
    public:
        Crescendo();
        char return_move();
        void makeMove();
};
#endif
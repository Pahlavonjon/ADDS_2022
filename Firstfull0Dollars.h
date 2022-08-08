#ifndef Firstfull0Dollars_H
#define Firstfull0Dollars_H
#include "Player.h"
#include <iostream>
#include <string>
class Firstfull0Dollars : public Player {
    private:
        char Firstfull0Dollars_move;
        int move_order;
    public:
        Firstfull0Dollars();
        char return_move();
        void makeMove();
};
#endif
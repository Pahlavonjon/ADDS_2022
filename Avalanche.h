#ifndef Avalanche_H
#define Avalanche_H
#include "Player.h"
#include <iostream>
#include <string>
class Avalanche : public Player {
    private:
        char Avalanche_move;
        std::string Avalanche_name;
    public:
        Avalanche();
        char return_move();
        void makeMove();
};
#endif
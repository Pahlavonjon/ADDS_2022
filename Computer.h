#ifndef Computer_H
#define Computer_H
#include "Player.h"
#include <iostream>
#include <string>
class Computer : public Player {
    private:
        char Computer_move;
        std::string Computer_name;
    public:
        Computer();
        void makeMove();
        char return_move();
};
#endif
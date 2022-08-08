#ifndef Human_H
#define Human_H
#include "Player.h"
#include <iostream>
#include <string>
class Human : public Player {
    private:
        std::string name;
        char move;
    public:
        Human();
        char return_move();
        void makeMove();
};
#endif
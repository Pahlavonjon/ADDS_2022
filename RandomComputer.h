#ifndef RandomComputer_H
#define RandomComputer_H
#include "Player.h"
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <random>
class RandomComputer : public Player {
    private:
        char RandomComputer_move;
        char* possible_moves;
        std::string RandomComputer_name;
    public:
        RandomComputer();
        ~RandomComputer();
        void makeMove();
        char return_move();
};
#endif
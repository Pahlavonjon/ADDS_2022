#ifndef Referee_H
#define Referee_H
#include "Computer.h"
#include "Human.h"
#include <iostream>
#include <string>
class Referee {
    private:
        std::string name;
        char move;
    public:
        Referee();
        char refGame(Human player1, Computer player2);
};
#endif
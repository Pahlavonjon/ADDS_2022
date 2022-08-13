#ifndef Referee_H
#define Referee_H
#include "Player.h"
#include <iostream>
#include <string>
class Referee {
    private:
        char move;
    public:
        Referee();
        char refGame(Player* player1, Player* player2);
};
#endif
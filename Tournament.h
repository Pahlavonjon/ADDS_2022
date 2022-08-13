#ifndef Tournament_H
#define Tournament_H
#include "Player.h"
#include "Referee.h"
#include <iostream>
#include <string>
class Tournament {
    private:
        int* Player_Scores;
    public:
        Tournament();
        ~Tournament();
        void make_moves_all(Player* competitors,int number_players_left);
        Player* run(Player* competitors);
};
#endif
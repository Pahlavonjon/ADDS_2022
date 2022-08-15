#ifndef Tournament_H
#define Tournament_H
#include "Player.h"
#include "Referee.h"
#include <iostream>
#include <string>
#include <array>
class Tournament {
    private:
        std::array<int,8> Player_Scores {{0,0,0,0,0,0,0,0}};
    public:
        Tournament();
        ~Tournament();
        //void make_moves_all(Player* competitors,int number_players_left);
        Player* run(std::array<Player *, 8>  competitors);
};
#endif
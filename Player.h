#ifndef Player_H
#define Player_H
#include <iostream>
#include <string>
class Player {
    public:
        Player();
        void makeMove();
        char return_move();
        std::string Return_player_name();
        // void virtual makeMove() = 0;
        // char virtual return_move() = 0;
};
#endif
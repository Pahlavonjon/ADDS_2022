#ifndef Player_H
#define Player_H
#include <iostream>
#include <string>
class Player {
    public:
        Player();
        virtual void makeMove();
        virtual char return_move();
        virtual std::string Return_player_name();
        // void virtual makeMove() = 0;
        // char virtual return_move() = 0;
};
#endif
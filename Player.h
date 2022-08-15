#ifndef Player_H
#define Player_H
#include <iostream>
#include <string>
class Player {
    public:
        virtual void makeMove() = 0;
        virtual char return_move() = 0;
        virtual std::string Return_player_name() = 0;
};
#endif
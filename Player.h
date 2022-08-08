#ifndef Player_H
#define Player_H
#include <iostream>
#include <string>
class Player {
    public:
        void virtual makeMove() = 0;
        char virtual return_move() = 0;
};
#endif
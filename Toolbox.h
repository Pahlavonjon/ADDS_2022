#ifndef Toolbox_H
#define Toolbox_H
#include "Player.h"
#include <iostream>
#include <string>
class Toolbox : public Player {
    private:
        char Toolbox_move;
    public:
        Toolbox();
        char return_move();
        void makeMove();
};
#endif
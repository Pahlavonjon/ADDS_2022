#ifndef PaperDoll_H
#define PaperDoll_H
#include "Player.h"
#include <iostream>
#include <string>
class PaperDoll : public Player {
    private:
        char PaperDoll_move;
        int move_order;
    public:
        PaperDoll();
        char return_move();
        void makeMove();
};
#endif
#ifndef PaperDoll_H
#define PaperDoll_H
#include "Player.h"
#include <iostream>
#include <string>
class PaperDoll : public Player {
    private:
        char PaperDoll_move;
        int move_order;
        std::string PaperDoll_name;
    public:
        PaperDoll();
        char return_move();
        void makeMove();
};
#endif
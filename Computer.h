#ifndef Computer_H
#define Computer_H
#include <iostream>
#include <string>
class Computer {
    private:
        char Computer_move;
    public:
        Computer();
        void makeMove();
        char return_move();
};
#endif
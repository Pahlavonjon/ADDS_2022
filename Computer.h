#ifndef Computer_H
#define Computer_H
#include <iostream>
#include <string>
class Computer {
    private:
        std::string name;
        char move;
    public:
        Computer();
        char makeMove();
        char getmove();

};
#endif
#ifndef Human_H
#define Human_H
#include <iostream>
#include <string>
class Human {
    private:
        std::string name;
        char move;
    public:
        Human();
        char makeMove();
        void selectmove(char the_move);
        char getmove();

};
#endif
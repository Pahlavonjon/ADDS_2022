#ifndef Bureaucrat_H
#define Bureaucrat_H
#include "Player.h"
#include <iostream>
#include <string>
class Bureaucrat : public Player {
    private:
        char Bureaucrat_move;
    public:
        Bureaucrat();
        char return_move();
        void makeMove();
};
#endif
#ifndef Bureaucrat_H
#define Bureaucrat_H
#include "Player.h"
#include <iostream>
#include <string>
class Bureaucrat : public Player {
    private:
        char Bureaucrat_move;
        std::string Bureaucrat_name;
    public:
        Bureaucrat();
        char return_move();
        void makeMove();
        std::string Return_player_name();

};
#endif
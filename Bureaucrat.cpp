#include <iostream>
#include <string>
#include "Bureaucrat.h"
#include "Player.h"
using namespace std;
Bureaucrat::Bureaucrat(){this->Bureaucrat_move = 'P'; this->Bureaucrat_name = "Bureaucrat";}
    char Bureaucrat::return_move(){return Bureaucrat_move;}
    void Bureaucrat::makeMove(){this->Bureaucrat_move = 'P';}
    std::string Bureaucrat::Return_player_name(){
        return Bureaucrat_name;
    }


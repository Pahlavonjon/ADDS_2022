#include <iostream>
#include <string>
#include "Bereaucrat.h"
#include "Player.h"
using namespace std;
Bureaucrat::Bureaucrat(){this->Bureaucrat_move = 'P';}
    char Bureaucrat::return_move(){return Bureaucrat_move;}
    void Bureaucrat::makeMove(){this->Bureaucrat_move = 'P';}


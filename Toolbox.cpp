#include <iostream>
#include <string>
#include "Toolbox.h"
#include "Player.h"
using namespace std;
Toolbox::Toolbox(){this->Toolbox_move = 'S';}
    char Toolbox::return_move(){return Toolbox_move;}
    void Toolbox::makeMove(){this->Toolbox_move = 'S';}

  
#include <iostream>
#include <string>
#include "Toolbox.h"
#include "Player.h"
using namespace std;
Toolbox::Toolbox(){this->Toolbox_move = 'S'; this->Toolbox_name = "Toolbox";}
    char Toolbox::return_move(){return Toolbox_move;}
    void Toolbox::makeMove(){this->Toolbox_move = 'S';}
    std::string Toolbox::Return_player_name(){
        return Toolbox_name;
    }

  
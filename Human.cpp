#include "Human.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
Human::Human(){this->name = "human"; this->Human_name = "Human";}
void Human::makeMove(){cout << "\nEnter move: "; cin >> move;}
char Human::return_move(){return this->move;}
std::string Human::Return_player_name(){
        return Human_name;
    }


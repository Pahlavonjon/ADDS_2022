#include "Computer.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <random>
#include <cmath>
#include <ctime>
using namespace std;
Computer::Computer(){this->Computer_name = "Computer";}
void Computer::makeMove(){this->Computer_move = 'R';}
char Computer::return_move(){return this->Computer_move;}
std::string Computer::Return_player_name(){
        return Computer_name;
    }
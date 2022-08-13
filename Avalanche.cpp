#include <iostream>
#include <string>
#include "Avalanche.h"
#include "Player.h"
using namespace std;
    Avalanche::Avalanche(){this->Avalanche_move = 'R'; this->Avalanche_name = "Avalanche";}
    char Avalanche::return_move(){return Avalanche_move;}
    void Avalanche::makeMove(){this->Avalanche_move = 'R';}
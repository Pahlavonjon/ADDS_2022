#include "Computer.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <random>
#include <cmath>
#include <ctime>
using namespace std;
Computer::Computer(){}
void Computer::makeMove(){this->move = 'R';}
char Computer::return_move(){return this->move;}
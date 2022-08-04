#include "Computer.h"
#include <iostream>
#include <string>
using namespace std;
Computer::Computer(){this->name = "computer";this->move = 'R';}
char Computer::makeMove(){return move;}
char Computer::getmove(){return this->move;}
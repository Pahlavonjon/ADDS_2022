#include "Human.h"
#include <iostream>
#include <string>
using namespace std;
Human::Human(){this->name = "human";}
char Human::makeMove(){cin >> move; ;return move;}
void Human::selectmove(char the_move){this->move = the_move;}
char Human::getmove(){return this->move;}
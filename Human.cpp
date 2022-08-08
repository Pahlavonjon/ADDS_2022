#include "Human.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
Human::Human(){this->name = "human";}
void Human::makeMove(){cout << "\nEnter move: "; cin >> move;}
char Human::return_move(){return this->move;}


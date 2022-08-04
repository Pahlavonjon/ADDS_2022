#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <iostream>
#include <string>
using namespace std;
Referee::Referee(){}
char Referee::refGame(Human player1, Computer player2){
    if (player1.getmove() == 'P' && player2.getmove() == 'R'){return 'W';}
    else if (player1.getmove() == 'S' && player2.getmove() == 'R'){return 'L';}
    else if (player1.getmove() == 'R' && player2.getmove() == 'R'){return 'T';}
    return 'l';
}
#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <iostream>
#include <string>
using namespace std;
Referee::Referee(){}
char Referee::refGame(Human player1, Computer player2){
    if (player1.makeMove() == 'P' && player2.makeMove() == 'R'){return 'W';}
    else if (player1.makeMove() == 'S' && player2.makeMove() == 'R'){return 'L';}
    else if (player1.makeMove() == 'R' && player2.makeMove() == 'R'){return 'T';}
    return 'l';
}
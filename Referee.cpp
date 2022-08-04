#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <iostream>
#include <string>
using namespace std;
Referee::Referee(){}
char Referee::refGame(Human player1, Computer player2){
    char player1move = player1.makeMove();
    char player2move = player2.makeMove();
    if (player1move == 'P' && player2move == 'R'){return 'W';}
    else if (player1move == 'S' && player2move == 'R'){return 'L';}
    else if (player1move == 'R' && player2move == 'R'){return 'T';}
    return 'l';
}
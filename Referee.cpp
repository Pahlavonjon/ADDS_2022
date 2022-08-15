#include "Referee.h"
#include "Player.h"
// #include "Computer.h"
// #include "Human.h"
// #include "Avalanche.h"
// #include "RandomComputer.h"
// #include "Crescendo.h"
// #include "Firstfull0Dollars.h"
// #include "Paperdoll.h"
// #include "Toolbox.h"
// #include "Bureaucrat.h"
#include <iostream>
#include <string>
using namespace std;
Referee::Referee(){}
char Referee::refGame(Player* player1, Player* player2){
    player1->makeMove();
    player2->makeMove();
    if (player1->return_move() == 'R' && player2->return_move() == 'R'){return 'T';}
    else if (player1->return_move() == 'R' && player2->return_move() == 'P'){return 'L';}
    else if (player1->return_move() == 'R' && player2->return_move() == 'S'){return 'W';}

    else if (player1->return_move() == 'P' && player2->return_move() == 'P'){return 'T';}
    else if (player1->return_move() == 'P' && player2->return_move() == 'S'){return 'L';}
    else if (player1->return_move() == 'S' && player2->return_move() == 'S'){return 'T';}


   // else if (player1->return_move() == 'R' && player2->return_move() == 'R'){return 'T';}
    else if (player1->return_move() == 'P' && player2->return_move() == 'R'){return 'W';}
    else if (player1->return_move() == 'S' && player2->return_move() == 'R'){return 'L';}

    else if (player1->return_move() == 'P' && player2->return_move() == 'P'){return 'T';}
    else if (player1->return_move() == 'S' && player2->return_move() == 'P'){return 'W';}
   // else if (player1->return_move() == 'S' && player2->return_move() == 'S'){return 'T';}
    return 'L';
}






// Referee::Referee(){}
// char Referee::refGame(Human player1, Computer player2){
//     char player1move = player1.makeMove();
//     char player2move = player2.makeMove();
//     if (player1move == 'P' && player2move == 'R'){return 'W';}
//     else if (player1move == 'S' && player2move == 'R'){return 'L';}
//     else if (player1move == 'R' && player2move == 'R'){return 'T';}
//     return 'l';
// }
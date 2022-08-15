#include <iostream>
#include <string>
#include <array>
#include <vector>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Computer.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "Player.h"
#include "Toolbox.h"
#include "Tournament.h"
#include "RandomComputer.h"
#include "PaperDoll.h"
using namespace std;
int main(void){
   // Avalanche Bureaucrat Bureaucrat Toolbox Toolbox Crescendo Crescendo FistfullODollars
   // Avalanche Avalanche Avalanche Avalanche Avalanche Bureaucrat Avalanche Avalanche
    array<Player* , 8> Players_array;

    Players_array.at(0) = new Avalanche();
    Players_array.at(1) = new Avalanche();
    Players_array.at(2) = new Avalanche();
    Players_array.at(3) = new Avalanche();
    Players_array.at(4) = new Avalanche();
    Players_array.at(5) = new Bureaucrat();
    Players_array.at(6) = new Avalanche();
    Players_array.at(7) = new Avalanche();


    // Players_array.at(0) = new Avalanche();
    // Players_array.at(1) = new Bureaucrat();
    // Players_array.at(2) = new Bureaucrat();
    // Players_array.at(3) = new Toolbox();
    // Players_array.at(4) = new Toolbox();
    // Players_array.at(5) = new Crescendo();
    // Players_array.at(6) = new Crescendo();
    // Players_array.at(7) = new FistfullODollars();

    // Players_array.at(0) = new Avalanche();
    // Players_array.at(1) = new Bureaucrat();
    // Players_array.at(2) = new Crescendo();
    // Players_array.at(3) = new FistfullODollars();
    // Players_array.at(4) = new RandomComputer();
    // Players_array.at(5) = new PaperDoll();
    // Players_array.at(6) = new Toolbox();
    // Players_array.at(7) = new Computer();



    Tournament* The_Tournament = new Tournament;
    Player* Winner;
    Winner = The_Tournament->run(Players_array);
    cout << "\n\n " << Winner->Return_player_name() << "\n\n";
    return 0;
}
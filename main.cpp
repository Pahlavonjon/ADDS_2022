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
    // bool run_main = true;
   // Player** Players_Array = new Player[8];
    array<Player* , 8> Players_array;
    Players_array.at(0) = new Avalanche();
    Players_array.at(1) = new Bureaucrat();
    Players_array.at(2) = new Crescendo();
    Players_array.at(3) = new FirstfullODollars();
    Players_array.at(4) = new RandomComputer();
    Players_array.at(5)= new PaperDoll();
    Players_array.at(6) = new Toolbox();
    Players_array.at(7) = new Computer();
  //  Referee* The_Referee = new Referee;
    Tournament* The_Tournament = new Tournament;
    Player* Winner;
    Winner = The_Tournament->run(Players_array);
    cout << "\n\n " << Winner->Return_player_name() << "\n\n";



   // delete [] Players_array;
    return 0;
}
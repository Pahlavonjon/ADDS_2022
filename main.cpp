#include <iostream>
#include <string>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Computer.h"
#include "Crescendo.h"
#include "Fistfull0Dollars.h"
#include "Player.h"
#include "Toolbox.h"
#include "Tournament.h"
#include "RandomComputer.h"
#include "PaperDoll.h"
using namespace std;
int main(void){
    bool run_main = true;
    Player** Players_Array = new Player*[8];
    *(Players_Array+0) = new Avalanche();
    *(Players_Array+1) = new Bureaucrat();
    *(Players_Array+2) = new Crescendo();
    *(Players_Array+3) = new Firstfull0Dollars();
    *(Players_Array+4) = new RandomComputer();
    *(Players_Array+5) = new PaperDoll();
    *(Players_Array+6) = new Toolbox();
    *(Players_Array+7) = new Computer();
    Referee* The_Referee = new Referee;
    Tournament* The_Tournament = new Tournament;
    Player* Winner = new Player();
    Winner = The_Tournament->run(Players_Array);
    cout << "\n\n " << Winner->Return_player_name() << "\n\n";



    delete [] Players_Array, The_Referee;
    return 0;
}
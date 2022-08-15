#include <iostream>
#include <string>
#include "FistfullODollars.h"
#include "Player.h"
using namespace std;
FistfullODollars::FistfullODollars(){this->move_order = 0; this->FistfullODollars_name = "FistfullODollars";}
    char FistfullODollars::return_move(){return FistfullODollars_move;}
    void FistfullODollars::makeMove(){
        switch (this->move_order){
            case 0:
                this->FistfullODollars_move = 'R';
                this->move_order++;
                break;
            case 1:
                this->FistfullODollars_move = 'P';
                this->move_order++;
                break;
            case 2:
                this->FistfullODollars_move = 'P';
                this->move_order = 0;
                break;        
        }   
    }
    std::string FistfullODollars::Return_player_name(){
        return FistfullODollars_name;
    }
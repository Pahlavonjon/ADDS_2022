#include <iostream>
#include <string>
#include "FistfullODollars.h"
#include "Player.h"
using namespace std;
FirstfullODollars::FirstfullODollars(){this->move_order = 0; this->FirstfullODollars_name = "FirstfullODollars";}
    char FirstfullODollars::return_move(){return FirstfullODollars_move;}
    void FirstfullODollars::makeMove(){
        switch (this->move_order){
            case 0:
                this->FirstfullODollars_move = 'R';
                this->move_order++;
                break;
            case 1:
                this->FirstfullODollars_move = 'P';
                this->move_order++;
                break;
            case 2:
                this->FirstfullODollars_move = 'P';
                this->move_order = 0;
                break;        
        }   
    }
    std::string FirstfullODollars::Return_player_name(){
        return FirstfullODollars_name;
    }
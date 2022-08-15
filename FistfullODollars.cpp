#include <iostream>
#include <string>
#include "FistfullODollars.h"
#include "Player.h"
using namespace std;
Firstfull0Dollars::Firstfull0Dollars(){this->move_order = 0; this->Firstfull0Dollars_name = "Firstfull0Dollars";}
    char Firstfull0Dollars::return_move(){return Firstfull0Dollars_move;}
    void Firstfull0Dollars::makeMove(){
        switch (this->move_order){
            case 0:
                this->Firstfull0Dollars_move = 'R';
                this->move_order++;
                break;
            case 1:
                this->Firstfull0Dollars_move = 'P';
                this->move_order++;
                break;
            case 2:
                this->Firstfull0Dollars_move = 'P';
                this->move_order = 0;
                break;        
        }   
    }
    std::string Firstfull0Dollars::Return_player_name(){
        return Firstfull0Dollars_name;
    }
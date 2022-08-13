#include <iostream>
#include <string>
#include "Crescendo.h"
#include "Player.h"
using namespace std;
Crescendo::Crescendo(){this->move_order = 0; this->Crescendo_name = "Crescendo";}
    char Crescendo::return_move(){return Crescendo_move;}
    void Crescendo::makeMove(){
        switch (this->move_order){
            case 0:
                this->Crescendo_move = 'P';
                this->move_order++;
                break;
            case 1:
                this->Crescendo_move = 'S';
                this->move_order++;
                break;
            case 2:
                this->Crescendo_move = 'R';
                this->move_order = 0;
                break;        
        }   
    }
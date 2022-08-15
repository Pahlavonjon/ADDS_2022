#include <iostream>
#include <string>
#include "Crescendo.h"
#include "Player.h"
using namespace std;
Crescendo::Crescendo(){this->move_order = 0; this->Crescendo_name = "Crescendo"; this->move_number = 0;}
    char Crescendo::return_move(){return Crescendo_move;}
    void Crescendo::makeMove(){
        switch (this->move_order){
            case 0:
                this->Crescendo_move = 'P';
                this->move_number++;
                if (this->move_number == 6){
                    this->move_order = 0;
                }
                else {
                    this->move_order++;
                }
                break;
            case 1:
                this->Crescendo_move = 'S';
                this->move_number++;
                if (this->move_number == 6){
                    this->move_order = 0;
                }
                else {
                    this->move_order++;
                }
                break;
            case 2:
                this->Crescendo_move = 'R';
                this->move_order = 0;
                this->move_number++;
                break;        
        }   
    }
    std::string Crescendo::Return_player_name(){
        return Crescendo_name;
    }
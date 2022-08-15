#include <iostream>
#include <string>
#include "PaperDoll.h"
#include "Player.h"
using namespace std;
PaperDoll::PaperDoll(){this->move_order = 0; this->PaperDoll_name = "PaperDoll"; this->move_number = 0;}
    char PaperDoll::return_move(){return PaperDoll_move;}
    void PaperDoll::makeMove(){
        switch (this->move_order){
            case 0:
                this->PaperDoll_move = 'P';
                this->move_number++;
                this->move_order++;
                break;
            case 1:
                this->PaperDoll_move = 'S';
                this->move_number++;
                if (this->move_number == 6){
                    this->move_order = 0;
                }
                else {
                    this->move_order++;
                }
                break;
            case 2:
                this->PaperDoll_move = 'S';
                this->move_number++;
                this->move_order = 0;
                break;        
        }   
    }
    std::string PaperDoll::Return_player_name(){
        return PaperDoll_name;
    }
#include <iostream>
#include <string>
#include "Firstfull0Dollars.h"
#include "Player.h"
using namespace std;
Firstfull0Dollars::Firstfull0Dollars(){this->move_order = 0;}
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
#include "Player.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <random>
#include <vector>
using namespace std;

        Person::Person(){}
        Person::Person(string person_name){
            this->person_name = person_name;
        }
        string Person::Return_Player_Name(){
            return this->person_name;
        }
        void Person::Player_Input(string player_input){
            this->person_move = player_input;
        }
        string Person::Return_Player_Input(){
            return this->person_move;
        }
        string* Person::Return_Player_Input_Address(){
            return &person_move;
        }

        string Person::computer_selection(){
            return "nothing";
        }
        Person::~Person(){}
        
#include "Player.h"
#include "Computer.h"
#include <iostream>
#include <string>
#include <random>
#include <vector>
using namespace std;
Computer::Computer(){
    computer_choices = new string[3]; 
    computer_choices[0] = "rock"; 
    computer_choices[1] = "paper"; 
    computer_choices[2] = "scissors"; 
}
Computer::Computer(string computer_name){
    this->computer_name = computer_name;
    computer_choices = new string[3]; 
    computer_choices[0] = "rock"; 
    computer_choices[1] = "paper"; 
    computer_choices[2] = "scissors";
}
string Computer::computer_selection(){
    srand(time(0));
    this->computer_move = computer_choices[rand()%3];
    return this->computer_move;
}
string Computer::Return_Player_Input(){
    return this->computer_move;
}
string* Computer::Return_Player_Input_Address(){
    return &computer_move;
}
void Computer::Player_Input(string computer_input){
    this->computer_move = computer_input;
}
string Computer::Return_Player_Name(){
    return this->computer_name;
}
Computer::~Computer(){
    delete[] computer_choices;
}
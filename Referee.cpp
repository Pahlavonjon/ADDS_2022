#ifndef Referee_H
#define Referee_H
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <thread>
#include "Player.h"
#include "Person.h"
#include "Computer.h"
using namespace std;
class Referee {
    private:
        string name;
    public:
        Referee();
}
while ((user_score && computer_score) <= score_to_win){
        cout <<"\n\n The scores are: "<<user_score<<" and "<<computer_score<<"\n";
        if (computer_score == score_to_win) {cout <<"\n\n The computer wins! \n\n"; break;}
        if (user_score == score_to_win) {cout <<"\n\n You win! \n\n"; break;}
        cout <<"\n\n Enter rock, paper or scissors: ";
        cin >> User_input;
        User->Player_Input(User_input);
        next_pick = true;
        The_Computer->Player_Input(The_Computer->computer_selection());
        cout <<"\n The computer chose: "<<The_Computer->Return_Player_Input()<<"\n\n";
        if (User->Return_Player_Input() == "rock" && The_Computer->Return_Player_Input() == "paper") {computer_score++;}
        else if (User->Return_Player_Input() == "paper" && The_Computer->Return_Player_Input() == "scissors") {computer_score++;}
        else if (User->Return_Player_Input() == "scissors" && The_Computer->Return_Player_Input() == "rock") {computer_score++;}
        else if (User->Return_Player_Input() == "paper" && The_Computer->Return_Player_Input() == "rock") {user_score++;}
        else if (User->Return_Player_Input() == "scissors" && The_Computer->Return_Player_Input() == "paper") {user_score++;}
        else if (User->Return_Player_Input() == "rock" && The_Computer->Return_Player_Input() == "scissors") {user_score++;}
        else if (User->Return_Player_Input() == The_Computer->Return_Player_Input()) {}
    }
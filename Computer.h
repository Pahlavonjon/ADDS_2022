#ifndef Computer_H
#define Computer_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
class Computer : public Player {
    private:
        string computer_name;
        string computer_move;
        string* computer_choices;
    public:
        Computer(string computer_name);
        Computer();
        ~Computer();
        string computer_selection();
        void Player_Input(string computer_input);
        string Return_Player_Input();
        string Return_Player_Name();
        string* Return_Player_Input_Address();
};
#endif
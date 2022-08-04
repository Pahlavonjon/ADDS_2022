#ifndef Computer_H
#define Computer_H
#include "Player.h"
#include <iostream>
#include <string>
class Computer : public Player {
    private:
        std::string computer_name;
        std::string computer_move;
        std::string* computer_choices;
    public:
        Computer(std::string computer_name);
        Computer();
        ~Computer();
        std::string computer_selection();
        void Player_Input(std::string computer_input);
        std::string Return_Player_Input();
        std::string Return_Player_Name();
        std::string* Return_Player_Input_Address();
};
#endif
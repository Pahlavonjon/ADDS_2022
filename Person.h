#ifndef Person_H
#define Person_H
#include "Player.h"
#include <iostream>
#include <string>
class Person : public Player {
    private:
        std::string person_name;
        std::string person_move;
    public:
        Person(std::string person_name);
        Person();
        ~Person();
        std::string Return_Player_Name();
        void Player_Input(std::string player_input);
        std::string Return_Player_Input();
        std::string computer_selection();
        std::string* Return_Player_Input_Address();
};
#endif
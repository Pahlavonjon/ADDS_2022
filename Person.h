#ifndef Person_H
#define Person_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
class Person : public Player {
    private:
        string person_name;
        string person_move;
    public:
        Person(string person_name);
        Person();
        ~Person();
        string Return_Player_Name();
        void Player_Input(string player_input);
        string Return_Player_Input();
        string computer_selection();
        string* Return_Player_Input_Address();
};
#endif
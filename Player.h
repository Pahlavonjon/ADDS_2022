#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;
class Player {
    public:
        void virtual Player_Input(string input) = 0;
        string virtual Return_Player_Input() = 0;
        string virtual Return_Player_Name() = 0;
        string virtual computer_selection() = 0;
        virtual string* Return_Player_Input_Address() = 0;
};
#endif
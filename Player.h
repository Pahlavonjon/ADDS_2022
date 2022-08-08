#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
class Player {
    public:
        void virtual Player_Input(std::string input) = 0;
        std::string virtual Return_Player_Input() = 0;
        std::string virtual Return_Player_Name() = 0;
        std::string virtual computer_selection() = 0;
        virtual std::string*Return_Player_Input_Address() = 0;
};
#endif
#include "RandomComputer.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <random>
using namespace std;
    RandomComputer::RandomComputer(){
        this->possible_moves = new char[3];
        possible_moves[0] = 'R';
        possible_moves[1] = 'P';
        possible_moves[2] = 'S';
        this->RandomComputer_name = "RandomComputer";
    }
    RandomComputer::~RandomComputer(){
        delete[] possible_moves;
    }
    void RandomComputer::makeMove(){
        RandomComputer_move = possible_moves[rand()%3];
    }
    char RandomComputer::return_move(){
        return RandomComputer_move;
    }
    std::string RandomComputer::Return_player_name(){
        return RandomComputer_name;
    }
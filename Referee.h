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
class Referee {
    public:
        Referee();
        Start_game();
        ~Referee();
};
#endif

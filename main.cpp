#include <iostream>
#include <string>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;
int main(void){
    Computer Bot;
    Human Person;
    Referee Gameref;
    bool run_main = true;
    while (run_main == true){
        cout << Gameref.refGame(Person,Bot);
    }
    
    return 0;
}
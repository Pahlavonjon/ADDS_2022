#include <string>
#include "Reverse.h"
#include <cmath>
using namespace std;
Reverse::Reverse(){this->reversed_number = 0;}
string Reverse::reverseString(string letters){
    if (letters.length() <= 0){
        return "ERROR";
    }
    if (letters.length() <= 1){
        return letters;
    }
    string smaller_string = letters.substr(1,letters.length()-1);
    string head = letters.substr(0,((letters.length()-1)-(letters.length()-2)));
    return (reverseString(smaller_string)+head);
}
int Reverse::reverseDigit(int value){
    if (value < 0){
        return -1;
    }
    else if (value > 0){
        int smallest_value = value%10;
        reversed_number = (reversed_number*10)+smallest_value;
        reverseDigit(value/10);
    }
    return reversed_number;
}
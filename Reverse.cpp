#include <string>
#include "Reverse.h"
using namespace std;
Reverse::Reverse(){}
string Reverse::reverseString(string letters){
    if (letters.length() <= 0){
        return "ERROR";
    }
    if (letters.length() <= 1){
        return letters;
    }
    string reverse_chunk = letters.substr(1,letters.length()-1);
    string reverse_letter = letters.substr(0,((letters.length()-1)-(letters.length()-2)));
    return (reverseString(reverse_chunk)+reverse_letter);
}
int Reverse::reverseDigit(int value,int decimal_point){
    if (value < 0){
        return -1;
    }
    if (value%10 == 0){
        return value;
    }
    int smallest_value = (((value%10)-(value%1))/1)*(((value%10)-(value%1))/1);
    int smaller_value = (value - smallest_value)/10;
    return reverseDigit(smaller_value,decimal_point-1)+smaller_value*(10^(decimal_point));
}
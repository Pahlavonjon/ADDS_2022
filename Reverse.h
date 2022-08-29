#ifndef Reverse_H
#define Reverse_H
#include <string>
class Reverse {
    int reversed_number;
    public:
        Reverse();
        int reverseDigit(int value);
        std::string reverseString(std::string letters);
};
#endif
#ifndef Reverse_H
#define Reverse_H
#include <string>
class Reverse {
    int first_string_index;
    int last_string_index;
    public:
        Reverse();
        int reverseDigit(int value, int decimal_point);
        std::string reverseString(std::string letters);
};
#endif
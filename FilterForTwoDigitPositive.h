#ifndef FilterForTwoDigitPositive_H
#define FilterForTwoDigitPositive_H
#include "FilterGeneric.h"
#include <vector>
class FilterForTwoDigitPositive : private FilterGeneric {
    private:
        unsigned int Vector_Size;
        unsigned int Current_element;
        bool g(int x);
    public:
        FilterForTwoDigitPositive();
        vector<int> filter(vector<int> The_Vector);
};
#endif
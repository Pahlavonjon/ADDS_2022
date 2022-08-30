#ifndef FilterOdd_H
#define FilterOdd_H
#include "FilterGeneric.h"
#include <vector>
class FilterOdd : private FilterGeneric {
    private:
        unsigned int Vector_Size;
        unsigned int Current_element;
        bool g(int x);
    public:
        FilterOdd();
        vector<int> filter(vector<int> The_Vector);
};
#endif
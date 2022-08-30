#ifndef FilterNonPositive_H
#define FilterNonPositive_H
#include <FilterGeneric.h>
#include <vector>
class FilterNonPositive : private FilterGeneric {
    private:
        unsigned int Vector_Size;
        unsigned int Current_element;
        bool g(int x);
    public:
        FilterNonPositive();
        vector<int> filter(vector<int> The_Vector);
};
#endif
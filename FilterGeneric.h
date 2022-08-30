#ifndef FilterGeneric_H
#define FilterGeneric_H
#include <vector>
class FilterGeneric {
    private:
        virtual bool g(int x) = 0;
    public:
        virtual vector<int> filter(vector<int> The_Vector) = 0;
};
#endif
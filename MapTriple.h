#ifndef MapTriple_H
#define MapTriple_H
#include <vector>
#include "MapGeneric.h"
class MapTriple : private MapGeneric {
    private:
        std::vector<int> Map_Vector;
        unsigned int Vector_Size;
        unsigned int Current_element;
        vector<int>::iterator Vector_Iterator;
    public:
        MapTriple();
        std::vector<int> map(std::vector<int>);
};
#endif
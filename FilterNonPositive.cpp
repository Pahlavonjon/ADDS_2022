#include "FilterNonPositive.h"
#include <vector>
using namespace std;
FilterNonPositive::FilterNonPositive(){this->Current_element = 0;}
vector<int> FilterNonPositive::filter(vector<int> The_Vector){
    if (Current_element >= The_Vector.size()){
        return The_Vector;
    }
    if (The_Vector.g((The_Vector.at(Current_element)) == false)){
        The_Vector.erase(Current_element,Current_element);
        this->Current_element++;
    }
    return filter(The_Vector);
}
bool FilterNonPositive::g(int x){
    if (x < 0){
        return true;
    }
    return false;
}
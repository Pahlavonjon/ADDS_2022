#include "FilterForTwoDigitPositive.h"
#include <vector>
using namespace std;
FilterForTwoDigitPositive::FilterForTwoDigitPositive(){this->Current_element = 0;}
vector<int> FilterForTwoDigitPositive::filter(vector<int> The_Vector){
    if (this->Current_element >= The_Vector.size()){
        return The_Vector;
    }
    if (g(The_Vector.at(Current_element) == false)){
        The_Vector.erase(Current_element,Current_element);
        this->Current_element++;
    }
    return filter(The_Vector);
}
bool FilterForTwoDigitPositive::g(int x){
    if (x > 0 && x >= 10){
        return true;
    }
    return false;
}
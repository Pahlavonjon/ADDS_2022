#include "FilterOdds.h" 
#include <vector> 
using namespace std;
    FilterOdd::FilterOdd(){this->Current_element = 0;}
    vector<int> FilterOdd::filter(vector<int> The_Vector){
        if (Current_element >= The_Vector.size()){
            return The_Vector;
        } 
        if (g(The_Vector.at(Current_element)) == false){
            The_Vector.erase(Current_element,Current_element);
            this->Current_element++;
        } 
        return filter(The_Vector); 
    } 
    bool FilterOdd::g(int x){
        if (x%2 != 0){ 
            return true;                 
        } 
        return false;
    }                     
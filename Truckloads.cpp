#include "Truckloads.h"
#include <iostream>
using namespace std;
Truckloads::Truckloads(){this->number_trucks = 0;}
int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates < 1){
        return 0;
    }
    if (numCrates <= loadSize){
        return 1;
    }
    int first_half;
    int second_half;
    if (numCrates%2 != 0){
        first_half = ((numCrates+1)/2)-1;
        second_half = numCrates/2;
    }
    else if (numCrates%2 == 0){
        first_half = numCrates/2;
        second_half = numCrates/2;
    }
    return numTrucks(first_half,loadSize)+numTrucks(second_half,loadSize);
}
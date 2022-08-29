#include "EfficientTruckloads.h"
EfficientTruckloads::EfficientTruckloads(){}
int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates < 2 || numCrates > 10000 || loadSize < 1 || loadSize > 9999){
        return 0;
    }
    if (numCrates <= loadSize){
        return 1;
    }
    int first_half = 0;
    int second_half = 0;
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
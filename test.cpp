#include <iostream>
#include <string>
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;
int main(){
    Truckloads Scania;
    EfficientTruckloads Volvo;
    int numCrates;
    int loadSize;
    cin >> numCrates >> loadSize;
    cout << "\n\n Number of trucks needed is " << Scania.numTrucks(numCrates,loadSize)<<"\n\n";
    cout << " Number of trucks needed is " << Volvo.numTrucks(numCrates,loadSize)<<"\n\n";
    cout <<"\n";
    return 0;
}
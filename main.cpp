#include <iostream>
#include <string>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;
int main(void){
    Reverse Tool;
    Truckloads Scania;
    EfficientTruckloads Volvo;

    int i;
    string s;
    int numCrates;
    int loadSize;

    

    cout << i << " " << s << " "  << Scania.numTrucks(numCrates,loadSize) << " " << Volvo.numTrucks(numCrates,loadSize)<<"\n";

    cout << "\n\n\n";

    cout << "\n\n " <<Tool.reverseString("Pahlavonjon")<<"\n\n";
    cout << "\n\n " <<Tool.reverseDigit(0)<<"\n\n";

    Volvo.number_trucks(2,2);
    cout << "\n\n Number of trucks needed is "<<Scania.numTrucks(12,2)<<"\n\n";
}
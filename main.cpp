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

    cin >> i >> s >> numCrates >> loadSize;
    if (cin.fail()){
        cout << "ERROR";
    }
    else {
        i = Tool.reverseDigit(i);
        s = Tool.reverseString(s);
        cout << i << " " << s << " "  << Scania.numTrucks(numCrates,loadSize) << " " << Volvo.numTrucks(numCrates,loadSize)<<"\n";
    }
}
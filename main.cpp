#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
using namespace std;
void Test__Function__One__(vector<int> Vector_Original, vector<int> Vector_Modified, unsigned int Current_element, unsigned int Vector_Size){
    cout << "\n\n";
    for (Current_element = 0; Current_element < Vector_Size; Current_element++){
        cout << " Modification of " << Vector_Original.at(Current_element) << " is  " << Vector_Modified.at(Current_element)<<"\n";
    }
}
int main(void){
    MapTriple Triple_Number;
    MapSquare Square_Number;
    MapAbsoluteValue Absolute_Number;
    vector<int> Vector_Map_Numbers = {70,71,72,73,74,75,76,77,78,79};
    vector<int> Vector_Map_Numbers_Negative = {-70,-71,-72,-73,-74,-75,-76,-77,-78,-79};
    vector<int> Vector_Map_Numbers_Tripled = Triple_Number.map(Vector_Map_Numbers);
    vector<int> Vector_Map_Numbers_Squared = Square_Number.map(Vector_Map_Numbers);
    vector<int> Vector_Map_Numbers_Absoluted = Absolute_Number.map(Vector_Map_Numbers_Negative);
    unsigned int Vector_Size = Vector_Map_Numbers.size();
    unsigned int Current_element = 0;

    cout << "\n";
    Test__Function__One__(Vector_Map_Numbers,Vector_Map_Numbers_Tripled,Current_element,Vector_Size);
    Test__Function__One__(Vector_Map_Numbers,Vector_Map_Numbers_Squared,Current_element,Vector_Size);
    Test__Function__One__(Vector_Map_Numbers_Negative,Vector_Map_Numbers_Absoluted,Current_element,Vector_Size);
    cout << "\n\n";

    return 0;
}
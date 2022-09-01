#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
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

    FilterOdd Odds_Only
    FilterNonPositive Negatives_Only;
    FilterForTwoDigitPositive Positives;
    unsigned int Filter_Vector_Size = Vector_Filter_Numbers.size();
    vector<int> Vector_Filter_Numbers = {34,-23,4,6,9,10,23,45,-45,-3,0,-96};
    vector<int> Vector_Filter_Numbers_odds = Odds_Only.filter(Vector_Filter_Numbers);
    vector<int> Vector_Filter_Numbers_negatives = Negatives_Only.filter(Vector_Filter_Numbers);
    vector<int> Vector_Filter_Numbers_Positives = Positives.filter(Vector_Filter_Numbers);

    cout << "\n";
    Test__Function__One__(Vector_Filter_Numbers,Vector_Filter_Numbers_odd,Current_element,Filter_Vector_Size);
    Test__Function__One__(Vector_Filter_Numbers,Vector_Filter_Numbers_negatives,Current_element,Filter_Vector_Size);
    Test__Function__One__(Vector_Filter_Numbers,Vector_Filter_Numbers_Positives,Current_element,Filter_Vector_Size);
    cout << "\n\n";
    return 0;
}
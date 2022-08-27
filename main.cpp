#include <iostream>
#include <string> // git rm -rf .
#include <algorithm>
#include <bits/stdc++.h>
#include "Reverse.h"
#include "Truckloads.h"
using namespace std;
int recursion_1(long long int Nummer){
    Nummer++;
    if (Nummer >= 100){
        return Nummer;
    }
    return recursion_1(Nummer);
}
string recursion_2(string Heisse,int first, int last){
    if (first >= Heisse.length()-1){
        return Heisse;
    }
    swap(Heisse.at(first),Heisse.at(last));
    return recursion_2(Heisse,first+1,last -1);

   // return recursion_2(Heisse.substr(1,Heisse.length()-1));
}
int main(void){
    //cout << "\n\n The output is: " << recursion_1(Nummer) << "\n\n";
    //cout << "\n\n "<<recursion_2("Pahlavonjon",0,10)<<"\n\n";

    // Reverse Tool;
    // cout << "\n\n " <<Tool.reverseString("Pahlavonjon")<<"\n\n";
    // cout << "\n\n " <<Tool.reverseString("1234")<<"\n\n";
    // cout << "\n\n " <<Tool.reverseDigit(123,3)<<"\n\n";

    Truckloads Scania;
    cout << "\n\n Number of trucks needed is "<<Scania.numTrucks(12,2)<<"\n\n";
}
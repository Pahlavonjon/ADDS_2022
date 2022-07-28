#include <iostream>
using namespace std;
void mobius_1(){
    long long int number = 0;
    for (int k = 11; k < 31; k++){
        number += k;
    }
    cout << "\n\n summation is: "<<number <<"\n\n";
}
void notes_sum(double *number){
    
    for (int k = 3; k < 11; k++){
        *number += (*number+k)*(*number+k);
    }
    cout << "\n\n summation is: "<<*number <<"\n\n";
}
int main(){
    double number = 0;
    notes_sum(&number);
}
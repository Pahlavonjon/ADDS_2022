#include <iostream>
#include <cmath>
using namespace std;
int check_digits(int value){
    int number_digits = 0;
    if (value >= 10000){
        number_digits = 4;
    }
    else if (value >= 1000){
        number_digits = 3;
    }
    else if (value >= 100){
        number_digits = 2;
    }
    else if (value >= 10){
        number_digits = 1;
        return value;
    }
    else if (value >= 0){
        number_digits = 0;
        return value;
    }
    return number_digits;
}
int main(){
    int value = 123;
    int smallest_value = (((value%10)-(value%1))/1);
    int smaller_value = (value - smallest_value)/10;
    cout << "\n\n "<<smallest_value<<"\n\n";
    cout << "\n\n "<<smaller_value<<"\n\n";
    int number_digits = check_digits(value);
    smallest_value *= pow(10,number_digits);
    cout << "\n\n"<<smallest_value<<"\n";
    value = smaller_value;
    smallest_value = (((value%10)-(value%1))/1);
    smaller_value = (value - smallest_value)/10;
    cout << "\n\n "<<smallest_value<<"\n\n";
    cout << "\n\n "<<smaller_value<<"\n\n";

    value = smaller_value;
    smallest_value = (((value%10)-(value%1))/1);
    smaller_value = (value - smallest_value)/10;
    cout << "\n\n "<<smallest_value<<"\n\n";
    cout << "\n\n "<<smaller_value<<"\n\n";
}
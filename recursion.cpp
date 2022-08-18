#include <iostream>
#include <string>
#include <random>
using namespace std;

int Recursion___1(int number){
    number -= (rand()%4);
    if (number <= 0){
        return number;
    }
    return Recursion___1(number);
}
int Recursion___2(int number_2, int number_3){
    number_3 = Recursion___1(number_2);
    if (number_3 <= -847){
        return number_3;
    }
    return Recursion___2(number_2,number_3);
}

int main(void){
    int double_recursion_result = Recursion___2(345,76);
    cout << "\n\n The number is: "<< double_recursion_result << "\n\n";
}
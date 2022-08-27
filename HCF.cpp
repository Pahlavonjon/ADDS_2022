#include <iostream>
using namespace std;
int highest_commen_factor(int target_1, int target_2, int factor_to_devide){
     cout << " "<<factor_to_devide<<"\n";
    if ((((target_1%factor_to_devide == 0)) && ((target_2%factor_to_devide) == 0)) && factor_to_devide >= 10){
        return factor_to_devide;
    }
    if (factor_to_devide >= 10){
        return 0;
    }
    return  highest_commen_factor(target_1,target_2,factor_to_devide+2);
}
int HCF(int n1, int n2){
    if (n2 != 0){
        HCF(n2,n1 % n2);
    }
    else {
        return n1;
    }
}
int main(void){
    //int result = highest_commen_factor(122,144,1);
    int result = HCF(20,30);
    cout << "\n\n The highest common factor is " << result <<"\n\n";
    return 0;
}
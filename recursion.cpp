#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int reverse_number(int target_number){
    int target_number_copy = target_number;
    int target_number_reversed = 0;
    int Number_digits[7] = {0};
    int recursion_loop = 0;
    bool number_reversed = false;
    if (number_reversed == false){
        Number_digits[recursion_loop] = (((target_number%(int(pow(10,recursion_loop))))) - (target_number%(int(pow(10,recursion_loop))))/(int(pow(10,recursion_loop))))*(((target_number%(int(pow(10,recursion_loop))))-(target_number%(int(pow(10,recursion_loop)))))/(int(pow(10,recursion_loop))));
        recursion_loop++;
        for (int k = 1; k < 8; k++){
            if (target_number_copy <= pow(10,k) && recursion_loop == k){
                for (int j = 0; j < 7; j++){
                    target_number_reversed += (Number_digits[j])*(pow(10,j));
                }
                return target_number_reversed;
            }
        } 
        return reverse_number(target_number);
    }
    // else {
    //     for (int k = 1; k < 8; k++){
    //         if (target_number_copy <= pow(10,k) && recursion_loop == k){
    //             for (int j = 0; j < 7; j++){
    //                 target_number_reversed += (Number_digits[j])*(pow(10,j)));
    //             }
               
    //         }
    //     }
    // }

    // int hundred_thousand = (((num%1000000)-(num%100000))/100000)*(((num%1000000)-(num%100000))/100000);

    // int ten_thousand = (((num%100000)-(num%10000))/10000)*(((num%100000)-(num%10000))/10000);

    // int thousand = (((num%10000)-(num%1000))/1000)*(((num%10000)-(num%1000))/1000);
  
    // int hundred = (((num%1000)-(num%100))/100)*(((num%1000)-(num%100))/100);
 
    // int tens = (((num%100)-(num%10))/10)*(((num%100)-(num%10))/10);

    // int ones = (((num%10)-(num%1))/1)*(((num%10)-(num%1))/1);
    return 0;
}
int main(void){
    cout << "\n\n The reverse of 9876  is:  "<<reverse_number(9876)<<"\n\n"; // 6789
}



       
        // if (target_number_copy <= 100 && recursion_loop == 2)
        //     return reserse_number(target_number);
        // if (target_number_copy <= 1000 && recursion_loop == 3)
        //     return reserse_number(target_number);
        // if (target_number_copy <= 10000 && recursion_loop == 4)
        //     return reserse_number(target_number);
        // if (target_number_copy <= 100000 && recursion_loop == 5)
        //     return reserse_number(target_number);
        // if (target_number_copy <= 1000000 && recursion_loop == 6)
        //     return reserse_number(target_number);
        // if (target_number_copy <= 10000000 && recursion_loop == 7)
        //     return reserse_number(target_number);
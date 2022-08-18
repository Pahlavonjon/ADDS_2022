#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <ctime>
#include <random>
using namespace std;
void Random(int number_list[5]){
    int sorted_numbers[5] = {0};
    for (int k = 0; k < 5; k++){
        bool done_with_element = false;
        for (int j = 0; j < 5; j++){
            if (done_with_element == false){
                sorted_numbers[k] = rand()%5 +1;
                while ((sorted_numbers[k] == number_list[k] || sorted_numbers[k] == number_list[j]) && (k != j)){
                    sorted_numbers[k] = rand()%5 +1;
                    // if ((sorted_numbers[k] != number_list[k] || sorted_numbers[k] != number_list[j]) && (k == j)){
                    //     done_with_element = true;
                    // }
                }
            }
        }
    }
    for (int k = 0; k < 5; k++){
        number_list[k] = sorted_numbers[k];
    }
}
int main(void){
    srand(time(0));
    int number_list[5] = {1,2,3,4,5};
    thread randomiser___(Random,number_list);
    randomiser___.detach();
    this_thread::sleep_for(chrono::milliseconds(1000)); 
    cout << "\n\n";
    for (int k = 0; k < 5; k++){
        cout << " "<<number_list[k]<<"\n";
    }
    cout << "\n\n";
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    vector<int> int_vector;
    int_vector.push_back(1);
    cout << "\n\n Vector elements are:  \n\n";
    for (auto k = int_vector.cbegin(); k != int_vector.cend(); ++k){
        cout <<" " << *k << "\n";
    }
    cout << "\n\n";
    vector<string> string_vector;
    string_vector.push_back("Pahlavonjon");
    string_vector.push_back("Odilov");
    cout << "\n\n Your name is: "<< string_vector.at(0)<< " "<< string_vector.at(1)<<"\n\n";

    vector<string> char_vector;
    char_vector.push_back("Writing in string . . .");
    for (auto k = char_vector.cbegin(); k != char_vector.cend(); k++){
        cout << *k;
    }
    cout << "\n\n";
}

//  cout << "\nOutput of cbegin and cend: ";
//     for (auto i = g1.cbegin(); i != g1.cend(); ++i)
//         cout << *i << " ";

// begin() – Returns an iterator pointing to the first element in the vector
// end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
// rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
// cbegin() – Returns a constant iterator pointing to the first element in the vector.
// cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
// crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
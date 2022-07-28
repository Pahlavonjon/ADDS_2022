#include <iostream>
#include <limits>  // needed for numerical_limits
#include <cctype> // needed for isspace() 
using namespace std;
// This program illustrates working with input streams.  The explanation of the 
// various calls can be found in this week's lecture recording
int main(void) {
    string myString;
    int n1, n2;
    
    cout << "Enter a number string number: ";
    cin >> n1 >> myString >> n2;
    cout << "You entered: " << n1 << " " << myString << " " << n2 << endl << endl;
    
    // the above will work as long as you give it the expected input.  << will read
    // until it sees whitespace or something that can't be read in as the type specified.
    // typing in:  -12 abc 5  will result in n1 having the value -12, myString 
    // having the value abc, n2 having the value 5
    
    // but what if the input is not correct
    // typing in: abc def 5
    cout << "Try typing abc def 5: ";
    cin >> n1 >> myString >> n2;
    cout << "n1, myString, n2: " << n1 << " " << myString << " " << n2 << endl;
    // >> will try to read in a number, but 'a' isn't a digit so >> will fail
    // we can check to see if it failed by using the fail() function which is 
    // defined for streams
    // lookup the fail function in the stream reference and/or refer to the lecture
    // recordingfor an explanation
    if (cin.fail()) {
        cout << "A faiure occured reading in the values for n1. abc def 5 is still 
        on the input stream cin.  n1 is invalid and nothing further is read for myString 
        and n2, so their values haven't changed" << endl << endl;
    }
    // reset the stream so it isn't in fail state, so we can read more input
    cin.clear();
    
    
    // since >> failed, then the input stream isn't changed.  abc def 5 are all 
    // still on the input stream
    // let's extract those values off the input stream
    cin >> myString;
    cin >> myString;
    cin >> n2;
    
    // We want to ignore the abc as it clearly isn't a valid input.  We can ignore 
    // it by using the ignore() function which is also defined for input streams
    // lookup the ignore function in the stream reference and/or refer to the 
    // lecture recordingfor an explanation
    cout << "This time we'll skip the first value.  Try typing abc def 5: ";
    cin >> n1;
    cout << "skipping first value "  << endl; 
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),' ');
   
    
    // cin now has: def 5
    // the abc and the space have been removed and we can clear the error state and
    // continue to read the next input
    cin >> myString >> n2;
    cout << "You entered: " << myString << " " << n2 << endl << endl;
    
    // there is another case we need to deal with though
    // what if the input was: 12feg abc 5
    // for this we would expect the first value is an error and the others are OK, 
    // but how will >> read it?
    
    cout << "Try typing 12feg abc 5: ";
    cin >> n1;
    // the 12 will be read off of cin and stored in n1.  cin will now have: feg abc
    // 5 5 in the stream
    // if we read into a string now, we will read the feg rather than the abc.
    // We only want to accept the 12feg as a number if *all* of it can be a number,
    // not just if part of it can
    // but cin will read in as much of the input as it can and will stop when it 
    // reaches something that it can't make part of a number.
    
    // so we want to check not just for the case when >> can't interpret the input 
    // as a number at all, but also the case when there is still more data right after the
    // input, not separated
    // by a space so should be considered still part of the value being read in.
    // we can test for this by 'peeking' at what the next character on the cin 
    // stream is and checking if it's the whitespace we're expecting to see
    // lookup peek() in the stream reference and/or refer to the lecture recording 
    // for an explanation
    char nextChar = cin.peek();
    if (!isspace(nextChar)) {
        cout << "The next character after reading in the first number isn't 
        whitespace.  The next character on the stream is " << nextChar << endl;
        // as above we would want to skip to the next input afte the space
    }
    else
        cout << "Input stream next character is whitespace" << endl << endl;
    
    
    // if we want to test both cases: that >> succeeded in reading in a value but 
    // also that there is whitespace indicating that the previous value is finished
    if (cin.fail() || !isspace(cin.peek()) )
        cout << "The first value either couldn't be read as the type wanted or 
    isn't followed by a space:  ERROR!!!" << endl;
    
    
    // note that I've used isspace() rather than cin.peek() != ' ' because if n2 is
    my LAST input value, it won't have a space after it.  It will have a newline '\n' 
    after it.  newline is considered whitespace, along with space, tab, etc.
    
    // Finally, if we are going to be checking fail() we need to reset it once 
    we've handled the error
    // before we go to read more input, you need to reset cin so it isn't in the 
    fail state.  You need to do this every time
    // you handle an error and are going on to read more input
    // lookup clear in the stream reference and/or refer to the lecture recording 
    for an explanation
    cin.clear();
    
    // the above will work as long as we don't need the spaces as part of the input
    or we want to read in a single value but don't want spaces to be the delimeter 
    between values
    //  If we do, we'll need to use getline(cin, mystring) instead to read in a 
    string containing spaces or getline(cin, mystring, delimeter) to read in a string 
    up to some delimeter other 
    //  than whitespace (for example: ' , ')
      
    // Please watch the stream lecture this week for an explanation of these 
    // functions and handling input
}
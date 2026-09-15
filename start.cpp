// comment
// Samuel Howard coding 1 fall 2026

#include <iostream>         // for cout
#include <string>           // for string
using namespace std;        // for cout

int main() {
    cout  << "TEST!!!!!!\n";
    cout  << "second test\n";  

    // lets get user input using cin (console in)
    cout << "What is your name, player?\n";
    // we want to store what the user typed in a string variable
    string input;       // create a new variable named input
    cin >> input;       // get input from the user
    cout << "Hello " << input << ".\n"; // Display their input

    // lets talk about variables some more.
    int count = 10;

    cout << "The count is " << count << ".\n";

    // while loop
    while(count > 0) {
        if(count % 2 == 0) {
            cout << "Even!\n";
        }
        else{
            cout << "Hello! " << count << "!\n";
            
        }

        count = count -1;   
    }

    int totalKeys = 0;
    cout << "Type 'key' to get a key.\n";
    cin >> input;

    if(input == "key") {
        cout << "You found a key!\n";
        totalKeys++;
    }
    else {
        cout << "Sorry, you did it wrong buddy.\n";
    }


    cout << "you have " << totalKeys << " keys.\n";

}
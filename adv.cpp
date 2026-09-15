// Samuel Howard coding 1 fall 2026
// adventure 1.0

#include <iostream>
#include <string>
#include <cstdlib>  // for rand
#include <ctime>    // for rand
using namespace std;

// start of the program
int main() {
    // seed the random number generator
    srand(time(0));

    cout << "Let's go adventuring!\n";
    cout << rand();
    cout << "\n";
    
    cout << "Here are twenty random numbers:\n";
    int counter = 1;
    while(counter < 21) {
        cout << rand() % 100 + 1 << "    ";
        if(counter % 4 == 0){
            cout << "\n";
        }
        counter++;
    } 


    int theNumber;
    theNumber = rand() % 100 +1;
    int guess;
    cout << "\n";

    do {
        // assign the random number to theNumber as an int
        
        // Ask the player to guess the number
        cout << "Guess a number between 1-100!\n";
        
        cin >> guess;
        if(guess == theNumber) {
            cout << "You win!\n";
        }
        else {
            if (guess > theNumber){
                cout << "Your guess is too high.\n";
            }
            else{
                cout << "Your guess is too low.\n";
            }
        }
    } while(guess != theNumber);


    return 0;
}

// Sam 
// array.cpp

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Loops and lists!\n";

    // create an array of favorite games
    // variable type is string, size is five
    string favGames[5];     // this creates five empty string vars

    // assign a value to the first game in the list
    favGames[0] = "Cyberpunk 2077";

    cout << "My top fav game is " << favGames[0] << ".\n";

    cout << "Please add another game to the list.\n";
    string input;
    getline(cin, input);
    // add the input to the array
    favGames[1] = input;

    cout << "The second fav game is " << favGames[1] << ".\n";

    // for loop has 3 useful vars attached to it
    // for(setup, test, increment) { code }

    cout << "Here are all of the fav games:\n";

    for(int i = 0; i < 5; i++) {
        // if line is empty, continue
        if(favGames[i] == "") {
            continue;       // continue means, go to the end of the loop
        }
        cout << favGames[i] << "\n";
    }

    // build an array of friends
    // collection initializer \/
    string friends[] = {"Luke", "Leia", "Han", "Chewie", "Artoo", "Threepio"};
    // cout << "First friend is " << friends[0] << ".\n";

    // show friends list
    for(int i = 0; i < 6; i++) {
        cout << friends[i] << "\n";
    }
    // ask the user to pick a friend to remove
    cout << "Which friend should we remove from the gane?\n";
    getline(cin, input);

    // remove the friend
    for(int i = 0; i < 6; i++) {
        if(input == friends[i]) {
            friends[i] = "[REDACTED]";  // removing friend
        }
    }

    // show the new friend list
    cout << "Here is the new gang:\n";
    for(int i = 0; i < 6; i++) {
        cout << friends[i] << "\n";
    }

    // create an array of scores with a size of 10

    const int SIZE = 10;    // constant variables cannot be changed

    int scores[SIZE];
    for(int i = 0; i < SIZE; i++) {
        cout << "Please add a score: ";
        getline(cin, input);
        
        if(input == "done") {
            scores[i] = -1;
            break;
        }

        scores[i] = stoi(input);        // stoi() converts string to int
    }

    for(int i = 0; i < SIZE; i++) {
        if(scores[i] == -1) {       // looking for the break number (-1)
            break;
        }
        cout << scores[i] << "\n";
    }

    // ask the user to input scores until the array is full or until they're done

    // then display scores
    return 0;
}
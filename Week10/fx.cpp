// Sam coding 1 fall 2026
// Functions

#include <iostream>
#include <string>
#include <vector>       // the easy to use array.
using namespace std;

// declaring + defining a function
void SayHello() {
    cout << "Hello!\n";
}

// declaring + defining a function, but w/ input parameters
void Say(string something) {
    cout << something << endl; // end Line
}

void CoolSay(string something) {
    for(int i = 0; i < something.size(); i++) {
        cout << something[i] << " ";
    }
    cout << endl;
}


// declaring and defining a function
// this one has two inputs and returns an int
int Add(int numA, int numB) {
    return numA + numB;
}

float Add(float numA, float numB) {
    return numA + numB;
}

bool AskYN(string question = "Keep playing?") {
    
    string input;
    while (true) {
        cout << question << "(y/n)\n";
        getline(cin, input);

        if(input == "y") {
            return true;
        } 
        else if(input == "n") {
            return false;
        }
        else {
            cout << "Invalid input. Please type 'y' or 'n'.\n";
        }
    }
}






// display vector function
    // input parameter = vector
    // return nothing = void
    // display all names with a loop

void DisplayVector(vector<string> vec) {
    // cout << "The first element in vec is " << vec[0] << endl;
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}


// function that triples a number
int tripleNum(int num) {
    return num * 3;
}

float tripleNum(float num) {
    return num * 3;
}



int main() {
    cout << "Finally, functions!!\n";

    // calling the function
    SayHello();
    Say("helllllo");
    CoolSay("yo, wassup");
    cout << "2 + 5 = " << Add(2,5) << endl;
    cout << "345 + -344 = " << Add(345,-344) << endl;
    
    

    if(AskYN()) {
        cout << "You said yes!\n";
    } 
    else {
        cout << "You said no :(\n";
    }

    // kids don't try this at home.
    if(AskYN())     cout << "Let's go to the next level\n";
    else            cout << "Thanks for playing\n";

    // ------------------------------------
    vector<string> names = {"Finn", "Jake", "Marceline", "Simon"};
    DisplayVector(names);


    cout << "10 tripled is " << tripleNum(10) << endl;

    cout << "0.5 tripled is " << tripleNum(5) << endl;

    return 0;
}


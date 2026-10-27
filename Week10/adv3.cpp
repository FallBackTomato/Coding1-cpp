// Sam coding 1 fall 2026
// adventure 3.0

// can I get it to complie and say hello

#include <iostream>
#include <string>
#include <cstdlib>      // c standard library for rand
#include <ctime>        // c time for srand(time(0))
using namespace std;        // comp sci people say don't do this cause of bloat

// GLOBAL VARIABLES
int health = 10;
int totalGold = 0;
bool debug = false;


int dieRoll(int max = 6) {      // random
    return rand() % max + 1;
}

void ending() {
    bool survived = health > 0;
    if (survived) {
        cout << "You decided to get away with what you have, " << totalGold << " gold, and with " << health << " health left";
    }
    else {
        cout << "You lost against that monster, you have " << totalGold << " total gold, left alone, on your body in the dungeon..." << endl;
    }
}

void Encounter() {
    // 

    int playerRoll = dieRoll();
    int enemyRoll = dieRoll();
    string input = "";

    if(debug) {
        cout << "playerRoll = " << playerRoll << endl;
        cout << "enemyRoll = " << enemyRoll << endl;
    }

    if (playerRoll > enemyRoll) {
        totalGold += dieRoll(3);
        cout << "You defeated a monster, you have " << totalGold << " total gold and " << health << " health." << endl;
    }
    else if(playerRoll == enemyRoll) {
        totalGold += dieRoll(5);
        health -= enemyRoll - dieRoll(enemyRoll - 1);
        cout << "You barely defeated that monster, you have " << totalGold << " total gold and " << health << " health left." << endl;
    }
    else {
        health -= enemyRoll;
        cout << "That monster won, you have " << health << " health left." << endl;
    }
}


bool askYN() {
    string input = "";
    cin >> input;

    if(input == "no") {
            return false;
        }
        else if(input == "yes") {
            cout << "That's a yes then!" << endl;
            return true;
        }
        else {
            cout << "I dunno what you just said, I guess it was a yes then!";
            return true;
        }
}




int main() {
    srand(time(0));

    
    while(health > 0) {
        cout << "Hello Player, won't you go adventuring?" << endl;
       
        if(askYN()) {
        }
        else{
            break;
        } 
        Encounter();
    }
    ending();
}

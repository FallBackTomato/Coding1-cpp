// Sam Coding 1 fall 2026
// Adventure program

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));

    // psudeocode
    // what do we wenna do?
    // setup
        // player health
        int health = 10;
        // total treasure
        int totalTreasure = 1;
        // player dice roll
        int playerDiceRoll = 0;
        // enemy dice roll
        int enemyDiceRoll = 0;
        // player input
        string input;
    // greet the player
    cout << "Hello player!\n";
    // start the game loop
    while(health > 0) {
        // ask if they wanna go adventuring
        cout << "Would you like to go adventuring!";
        // get input
        cin >> input;
        // if they DON'T, end the program
        if(input == "no") {
            // tell player their stats
            // cout << "You ran away! Your stats were: Health:" << health << " Gold: " << totalTreasure;
            break;      // end loop
        }
        // if they DO, start an encounter
        else if(input == "yes") {
            cout << "I like your enthusiasm! Let's go!\n";
        }
        else {      // else is a 'catch all' case or like the default
            cout << "I don't understand. Let's go anyway!\n";
        }
    
        // roll dice for player
        playerDiceRoll = rand() % 6 + 1;
        // roll dice for enemy
        enemyDiceRoll = rand() % 6 + 1;
        // if player roll is equal or higher
            // roll for gold amount and give it to player
        if(playerDiceRoll >= enemyDiceRoll) {
            totalTreasure += rand() % 10 + 1;
            cout << "You won! You now have " << totalTreasure << " gold!\n";
        }
        // else
            // subtract enemy roll from player health
        else {
            health -= enemyDiceRoll;
            cout << "Ouch! You lost! You only have " << health << " health remaining.\n";
        }
        // if player is still alive
            // keep looping
        //else
            // tell player how much gold they lost
    // end loop
    }
    if(health > 3) {
        cout << "Congrats on returning home with " << totalTreasure << " gold.\n";
    }
    else if(health > 0) {
        cout << "You need to see a doctor. You can afford it with your " << totalTreasure << " gold.\n";
    }
    else {
        cout << "You have died. " << totalTreasure << " gold lies next to cold body.\n";
    }
    


    return 0;
}

// questions
// how could we keep track of how many loops we've been on? "loopCount" variable and ++
// how could we make the enemies stronger every 3 loops? enemyDiceRoll *= (loopCount / 3)

// how do we know when we're at round 5 or 10 or 15 or 20? if(loopCount % 5 == 0)
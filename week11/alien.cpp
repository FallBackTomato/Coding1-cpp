// sam coding 1 fall 2026
// alien class thingy

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

// GLOBAL VARIABLES
string planets[] = {"Mercury", "Venus", "Moon", "Mars"};

int dieRoll(int max = 6) {      // random
    return rand() % max + 1;
}

class Alien {
public:
    int limbCount;
    bool canFly;
    float threatLevel;
    string homePlanet;

    Alien() {       // constructor
        int limbCount = dieRoll(4) + 2;
        string homePlanet = planets[dieRoll(4) - 1];
        bool canFly = rand() % 1 >= 5;
        float threatLevel = dieRoll(10) / 100;
        
    }

    Alien(int limbCount, bool canFly, float threatLevel, string homePlanet) {
        
    }

    void contact() {
        if(threatLevel > 0.9) {
            cout << "The Alien arrives, it's " << limbCount << " limbs are uncannily still, you feel a chill in your bones, though you can't tell where it's eyes are, you can feel it is watching you.\n";
            cout << "You have heard of this kind before, residents of " << homePlanet << ". You feel the urge to run, though you know that it is already too late.\n";
        }
        else if(threatLevel > 0.7) {
            cout << "The Alien arrives, it's " << limbCount << " limbs swinging wildly, it doesn't seem friendly.\n";
            cout << "It speaks 'I am from " << homePlanet << ", we have come to conquer you!'\n";
        }
        else if(threatLevel > 0.3) {
            cout << "The alien arrives, it's " << limbCount << " limbs swing calmy, it doesn't seem too dangerous.\n";
        }

        else {
            cout << "The alien arrives, it's " << limbCount << " limbs lay, harmless, on the floor, it seems utterly impudent and infantile.\n";
        }
    }

    void depart() {
        string dangerIndex;     // name for level of deadliness
        if(threatLevel > 0.9) {
            dangerIndex = "catastrophicly deadly";
        }
        else if(threatLevel > 0.7) {
            dangerIndex = "deadly";
        }
        else if(threatLevel > 0.3) {
            dangerIndex = "gentle";
        }
        else {
            dangerIndex = "utterly harmless";
        }

        if(canFly) {
            cout << "The alien takes flight on its massive wings, " << dangerIndex << limbCount << " limbs trailing behind it in the air.";
        }
        else {
            cout << "The alien scitters away on it's " << dangerIndex << limbCount << " limbs.";
        }
    }
};

int main() {
    srand(time(0));

    cout << "Let's meet some aliens!";

    Alien Jimbo;
    
    Jimbo.contact();

    Jimbo.depart();


}

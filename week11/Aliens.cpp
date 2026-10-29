// sam coding 1 fall 2026
// alien class thingy

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>      // c standard library for rand
#include <ctime>
#include <vector>
using namespace std;

// GLOBAL VARIABLES
vector<string> planets = {"Mercury", "Venus", "Jupiter", "Mars", "Saturn", "Glorp"};
vector<string> levelsOfThreat = {"harmless", "gentle", "deadly", "lethal"};
bool debug = false;

int dieRoll(int max = 6) {
    return rand() % max;
}

class Alien {
public:
    int limbCount;
    bool canFly;
    string threatLevel;
    string homePlanet;

    Alien() {
        limbCount = dieRoll(5) + 2;
        canFly = dieRoll(2) == 1;
        threatLevel = levelsOfThreat[dieRoll(levelsOfThreat.size())];
        homePlanet = planets[dieRoll(planets.size())];
    }

    Alien(int givenLimbCount, bool givenCanFly, string givenThreatLevel, string givenHomePlanet) {
        limbCount = givenLimbCount;
        canFly = givenCanFly;
        threatLevel = givenThreatLevel;
        homePlanet = givenHomePlanet;
    }

    void contact() {
        if(debug) {
            cout << "limbCount: " << limbCount << "\t canFly: " << canFly << "\t threatLevel: " << threatLevel << "\t homePlanet: " << homePlanet << ".\n";
        }

        if(threatLevel == "lethal") {
            cout << "The Alien arrives, it's " << limbCount << " limbs are uncannily still, you feel a chill in your bones, though you can't tell where it's eyes are, you can feel it is watching you.\n";
            cout << "You have heard of this kind before, residents of " << homePlanet << ". You feel the urge to run, though you know that it is already too late.\n";
        }
        else if(threatLevel == "deadly") {
            cout << "The Alien arrives, it's " << limbCount << " limbs swinging wildly, it doesn't seem friendly.\n";
            cout << "It speaks 'I am from " << homePlanet << ", we have come to conquer you!'\n";
        }
        else if(threatLevel == "gentle") {
            cout << "The alien arrives, it's " << limbCount << " limbs swing calmy, it doesn't seem too dangerous.\n";
            cout << "It speaks in a slow drawl, 'I   am   from   " << homePlanet << "' ... It says nothing else, it seems to think that was enough.";
        }

        else {
            cout << "The alien arrives, it's " << limbCount << " limbs lay, harmless, on the floor, it seems utterly impudent and infantile.\n";
            cout << "It has a nametag that reads 'From Planet " << homePlanet << ".'\n";
        }
    }

    void depart() {
        cout << "\n";
        if(canFly) {
            cout << "The alien takes flight on its massive wings, " << limbCount << " " << threatLevel << " limbs trailing behind it in the air as it flies into the distance, a mystery yet unsolved...\n";
        }
        else {
            cout << "The alien scitters away on it's " << limbCount << " " << threatLevel << " limbs, zipping off into the distance, a mystery yet unsolved...\n";
        }
    }
};


int main() {
    srand(time(0));

    cout << "Let's meet some aliens!\n\n";

    Alien Jimbo;
    Jimbo.contact();
    Jimbo.depart();

    Alien Bob;
    Bob.contact();
    Bob.depart();

    cout << "\n\nLet's meet some more aliens!!\n\n";

    Alien Alfred(4, false, "lethal", "Earth");
    Alfred.contact();
    Alfred.depart();

    Alien GlorpZorp(32, true, "harmless", "Zee-Worp");
    GlorpZorp.contact();
    GlorpZorp.depart();

}

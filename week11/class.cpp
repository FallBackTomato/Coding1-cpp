// sam fall 2026 coding 1
// classes

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

// classes are custom vars
// they have their own vars and funcitons
    // named "data members"
    // and "member functions"
    // they also have cunstructors and destructors
        // which run when the object is created or destroyed

class Robot {
public:
    string name;
    float charge;   // 0 to 1 as a percent

    Robot() {
        cout << "\tA new robot appears.\n";
    }

    Robot(string givenName, float givenCharge) {
        cout << "\tA new robot appears.\n";
        name = givenName;
        charge = givenCharge;
        status();
    }

    void status() {
        cout << "Hello my name is " << name << ".\n";
        cout << "I have " << charge * 100 << "% battery left.\n";
    }

    bool sleep() {
        cout << "Charging...\n";
        charge += 0.2f;

        // clamp to ceiling
        if(charge > 1) {
            charge = 1;
        }

        this_thread::sleep_for(1s);

        cout << "After some recharging,\n my battery level is now ";
        cout << charge * 100 << "%.\n";
        
        return charge == 1;
    }

};      // don't forget semicolon at end

class Alien {
public:
    int limbcount;
    bool canFly;
    float threatLevel;
    string homePlanet;

    Alien() {

    }

    void contact() {

    }


}


int main() {
    cout << "Let's learn all about classes!\n";

    Robot Rob;

    Rob.name = "Rob";
    Rob.charge = .78f;

    Rob.status();

    cout << "\nLet's make another robot!\n";
    Robot baymax("Baymax", 0.2f);
    baymax.sleep();

    while(baymax.charge < 1) {
        baymax.sleep();
    }
}


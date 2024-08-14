#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    int beans;
    int water;

public:
    CoffeeMachine() : beans(0), water(0) {}

    void addBeans(int amount) {
        beans += amount;
        cout << "Added " << amount << " coffee beans." << endl;
    }

    void addWater(int amount) {
        water += amount;
        cout << "Added " << amount << " ml of water." << endl;
    }

    void brew() {
        if (beans >= 10 && water >= 50) {
            cout << "Brewing coffee..." << endl;
            beans -= 10;
            water -= 50;
        } else {
            cout << "Not enough coffee beans or water!" << endl;
        }
    }

    void display() {
        cout << "Coffee beans level: " << beans << endl;
        cout << "Water level: " << water << endl;
    }
};

int main() {
    CoffeeMachine machine;

    machine.addBeans(50);
    machine.addWater(100);

    machine.brew();
    machine.brew();
    machine.brew();

    machine.display();

    return 0;
}
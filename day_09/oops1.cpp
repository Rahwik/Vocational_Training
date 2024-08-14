#include <iostream>
using namespace std;

class CoffeeMachineBase {
protected:
    int beans;
    int water;

public:
    CoffeeMachineBase() : beans(0), water(0) {}

    virtual void addBeans(int amount) = 0;
    virtual void addWater(int amount) = 0;
    virtual void brew() = 0;
    virtual void display() = 0;
};

class CoffeeMachine : public CoffeeMachineBase {
public:
    void addBeans(int amount) override {
        beans += amount;
        cout << "Added " << amount << " coffee beans." << endl;
    }

    void addWater(int amount) override {
        water += amount;
        cout << "Added " << amount << " ml of water." << endl;
    }

    void brew() override {
        if (beans >= 10 && water >= 50) {
            cout << "Brewing coffee..." << endl;
            beans -= 10;
            water -= 50;
        } else {
            cout << "Not enough coffee beans or water!" << endl;
        }
    }

    void display() override {
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
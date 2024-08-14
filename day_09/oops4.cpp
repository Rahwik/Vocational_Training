#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle() : brand(""), year(0) {}

    virtual void startEngine() = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void display() = 0;
    virtual void honkHorn() = 0;
};

class Car : public Vehicle {
public:
    Car(string brand, int year) : Vehicle() {
        this->brand = brand;
        this->year = year;
    }

    void startEngine() override {
        cout << brand << " car's engine is starting." << endl;
    }

    void accelerate() override {
        cout << brand << " car is accelerating." << endl;
    }

    void brake() override {
        cout << brand << " car is braking." << endl;
    }

    void display() override {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }

    void honkHorn() override {
        cout << brand << " car's horn is honking." << endl;
    }
};

class Truck : public Vehicle {
public:
    Truck(string brand, int year) : Vehicle() {
        this->brand = brand;
        this->year = year;
    }

    void startEngine() override {
        cout << brand << " truck's engine is starting." << endl;
    }

    void accelerate() override {
        cout << brand << " truck is accelerating." << endl;
    }

    void brake() override {
        cout << brand << " truck is braking." << endl;
    }

    void display() override {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }

    void honkHorn() override {
        cout << brand << " truck's horn is honking." << endl;
    }
};

class Bus : public Vehicle {
public:
    Bus(string brand, int year) : Vehicle() {
        this->brand = brand;
        this->year = year;
    }

    void startEngine() override {
        cout << brand << " bus's engine is starting." << endl;
    }

    void accelerate() override {
        cout << brand << " bus is accelerating." << endl;
    }

    void brake() override {
        cout << brand << " bus is braking." << endl;
    }

    void display() override {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }

    void honkHorn() override {
        cout << brand << " bus's horn is honking." << endl;
    }
};

int main() {
    Car car("Aston Martin Valkyrie", 2023);
    Truck truck("Ashoka Legend", 2022);
    Bus bus("Marco Polo", 2024);

    car.startEngine();
    car.accelerate();
    car.display();
    bus.display();
    truck.startEngine();
    bus.honkHorn();
    bus.honkHorn();

    return 0;
}
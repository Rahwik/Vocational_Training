#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    Animal() : name(""), age(0) {}

    virtual void eat() = 0;
    virtual void sleep() = 0;
    virtual void display() = 0;
    virtual void makeSound() = 0;
};

class Tiger : public Animal {
public:
    Tiger(string name, int age) : Animal() {
        this->name = name;
        this->age = age;
    }

    void eat() override {
        cout << name << " the tiger is eating." << endl;
    }

    void sleep() override {
        cout << name << " the tiger is sleeping." << endl;
    }

    void display() override {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void makeSound() override {
        cout << name << " the tiger roars." << endl;
    }
};

class Lion : public Animal {
public:
    Lion(string name, int age) : Animal() {
        this->name = name;
        this->age = age;
    }

    void eat() override {
        cout << name << " the lion is eating." << endl;
    }

    void sleep() override {
        cout << name << " the lion is sleeping." << endl;
    }

    void display() override {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void makeSound() override {
        cout << name << " the lion roars." << endl;
    }
};

class Giraffe : public Animal {
public:
    Giraffe(string name, int age) : Animal() {
        this->name = name;
        this->age = age;
    }

    void eat() override {
        cout << name << " the giraffe is eating." << endl;
    }

    void sleep() override {
        cout << name << " the giraffe is sleeping." << endl;
    }

    void display() override {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void makeSound() override {
        cout << name << " the giraffe moos." << endl;
    }
};

int main() {
    Tiger tiger("Vitaly", 5);
    Lion lion("Alex", 3);
    Giraffe giraffe("Melman", 7);

    tiger.eat();
    lion.sleep();
    giraffe.display();
    tiger.makeSound();
    lion.makeSound();
    giraffe.makeSound();

    return 0;
}
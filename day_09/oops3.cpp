#include <iostream>
#include <functional>
using namespace std;

class Animal {
private:
    string name;
    int age;
    function<void()> eat;
    function<void()> sleep;
    function<void()> display;

public:
    Animal(string name, int age, string type) : name(name), age(age) {
        eat = [this, type]() { cout << name << " the " << type << " is eating." << endl; };
        sleep = [this, type]() { cout << name << " the " << type << " is sleeping." << endl; };
        display = [this]() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        };
    }

    void eat() { eat(); }
    void sleep() { sleep(); }
    void display() { display(); }
};

int main() {
    Animal tiger("Raja", 5, "tiger");
    Animal lion("Simba", 3, "lion");
    Animal giraffe("Gerry", 7, "giraffe");

    tiger.eat();
    lion.sleep();
    giraffe.display();

    return 0;
}
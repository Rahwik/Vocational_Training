#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Getter methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    // Setter methods
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Display person's information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create a Person object
    Person per("Rahul Prasad", 21);

    // Display person's information
    per.displayInfo();

    // Update person's information
    per.setName("Vivek Kumar");
    per.setAge(21);

    // Display updated person's information
    per.displayInfo();

    return 0;
}
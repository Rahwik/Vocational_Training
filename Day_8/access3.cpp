#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}
    
    // Method to display person's information
    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person()
    {
        cout << "Person object destroyed: " << name << ", " << age << endl;
    }
};

int main()
{
    Person person1("Rahul", 21);
    cout << "Person object created: ";
    person1.displayInfo();

    Person person2("Vivek", 22);
    cout << "Person object created: ";
    person2.displayInfo();

    return 0;
}
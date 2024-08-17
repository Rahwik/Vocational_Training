#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    map<string, int> ages;
    ages["rahul"] = 25;
    ages["prasad"] = 30;
    ages["anwik"] = 35;

    map<int, string> grades = {{90, "A"}, {80, "B"}, {70, "C"}, {60, "D"}, {50, "F"}};

    cout << "John's age: " << ages["John"] << endl;
    cout << "Jane's age: " << ages["Jane"] << endl;
    cout << "Bob's age: " << ages["Bob"] << endl;

    for (auto it = grades.begin(); it != grades.end(); ++it) {
        cout << "Marks " << it->first << ": Grade " << it->second << endl;
    }

    return 0;
}
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    map<int, string> grades;

    grades.insert({90, "A"});
    grades.insert({80, "B"});
    grades.insert({70, "C"});
    grades.insert({60, "D"});
    grades.insert({50, "F"});

    grades.emplace(85, "B+");
    grades.emplace(75, "C+");
    grades.emplace(65, "D+");
    grades.emplace(55, "F+");

    for (const auto& pair : grades) {
        cout << "Marks " << pair.first << ": Grade " << pair.second << endl;
    }

    return 0;
}
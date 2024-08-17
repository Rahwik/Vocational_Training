#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    map<int, string> grades;

    grades.insert(make_pair(90, "A"));
    grades.insert(make_pair(80, "B"));
    grades.insert(make_pair(70, "C"));
    grades.insert(make_pair(60, "D"));
    grades.insert(make_pair(50, "F"));

    grades.insert(make_pair(85, "B+"));
    grades.insert(make_pair(75, "C+"));
    grades.insert(make_pair(65, "D+"));
    grades.insert(make_pair(55, "F+"));

    for (const auto& pair : grades) {
        cout << "Marks " << pair.first << ": Grade " << pair.second << endl;
    }

    return 0;
}
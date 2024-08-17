#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    map<int, string> grades;

    grades.insert_or_assign(90, "A");
    grades.insert_or_assign(80, "B");
    grades.insert_or_assign(70, "C");
    grades.insert_or_assign(60, "D");
    grades.insert_or_assign(50, "F");

    grades.insert_or_assign(85, "B+");
    grades.insert_or_assign(75, "C+");
    grades.insert_or_assign(65, "D+");
    grades.insert_or_assign(55, "F+");

    for (const auto& pair : grades) {
        cout << "Marks " << pair.first << ": Grade " << pair.second << endl;
    }

    return 0;
}
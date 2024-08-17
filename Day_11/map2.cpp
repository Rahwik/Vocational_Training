#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    map<int, string> grades = {{90, "A"}, {80, "B"}, {70, "C"}, {60, "D"}, {50, "F"}};

    for (auto it = grades.begin(); it != grades.end(); ++it) {
        cout << "Marks " << it->first << ": Grade " << it->second << endl;
    }

    return 0;
}
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    map<int, string> grades;
    //kaam achaa hai
    grades.insert({90, "A"});
    grades.insert({80, "B"});
    grades.insert({70, "C"});
    grades.insert({60, "D"});
    grades.insert({50, "F"});

    //jada achaa hai
    grades.insert(make_pair(85, "B+"));
    grades.insert(make_pair(75, "C+"));
    grades.insert(make_pair(65, "D+"));
    grades.insert(make_pair(55, "F+"));

    for (auto it = grades.begin(); it != grades.end(); ++it) {
        cout << "Marks " << it->first << ": Grade " << it->second << endl;
    }

    return 0;
}
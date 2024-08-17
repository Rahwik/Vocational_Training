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

    int key = 80;
    auto it = grades.find(key);
    if (it != grades.end()) {
        cout << "Marks " << it->first << ": Grade " << it->second << endl;
    } else {
        cout << "Key " << key << " not found." << endl;
    }

    // Check if a key exists
    key = 95;
    if (grades.count(key) > 0) {
        cout << "Key " << key << " exists." << endl;
    } else {
        cout << "Key " << key << " does not exist." << endl;
    }

    // Find an element by value
    string value = "B+";
    bool found = false;
    for (const auto& pair : grades) {
        if (pair.second == value) {
            cout << "Grade " << value << " corresponds to marks " << pair.first << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Grade " << value << " not found." << endl;
    }

    return 0;
}
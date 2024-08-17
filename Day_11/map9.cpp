#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    map<int, string> Mapm;

    Mapm.insert_or_assign(1, "Rahul");
    Mapm.insert_or_assign(2, "Prasad");
    Mapm.insert_or_assign(3, "Anwik");
    Mapm.insert_or_assign(4, "Yash");
    Mapm.insert_or_assign(5, "Hammy");

    Mapm.insert(make_pair(6, "Yotsuba"));

    int key = 3;
    auto it = Mapm.find(key);
    if (it != Mapm.end()) {
        cout << " ID : " << it->first << ", Name : " << it->second << endl;
    } else {
        cout << " ID " << key << " not found." << endl;
    }

    string value = "Prasad";
    bool found = false;
    for (const auto& pair : Mapm) {
        if (pair.second == value) {
            cout << "Name : " << value <<", ID : "<<pair.first << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Name : " << value << ", not found." << endl;
    }

    return 0;
}
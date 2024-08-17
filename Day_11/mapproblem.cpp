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

    cout << "Forward iteration:" << endl;
    for (auto it = Mapm.begin(); it != Mapm.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    
    cout << "Backward iteration:" << endl;
    for (auto it = Mapm.rbegin(); it != Mapm.rend(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    return 0;
}
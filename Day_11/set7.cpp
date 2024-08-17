#include <set>
#include <iostream>

using namespace std;

int main() {
    // Create a set and insert elements
    set<int> a;
    a.insert(1);
    a.insert(0);
    a.insert(2);
    a.insert(3);

    // Display the initial set
    cout << "Initial set: ";
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;

    //Display the size of the set
    cout << "Size of set: " << a.size() << endl;

    // Iterate over the set using an iterator
    cout << "Iterating over the set: ";
    for (auto b = a.begin(); b != a.end(); ++b) {
        cout << *b << " ";
    }
    cout << endl;

    // Search for an element in the set
    int c = 2;
    if (a.find(c) != a.end()) {
        cout << "Found " << c << endl;
        a.erase(c);
    } else {
        cout << "Did not find " << c << endl;
    }
    
    //Size of set after removing the desired value
    cout << "Size of set: " << a.size() << endl;

    // Clear the set
    cout << "Using clear in the set" << endl;
    a.clear();


    // Check if the set is empty after using clear
    if (a.empty()) {
        cout << "The set is empty." << endl;
    } else {
        cout << "The set is not empty." << endl;
    }

    return 0;
}
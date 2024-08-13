//show addition and removing elemnts in the vector
#include <iostream>
#include <vector>

using namespace std;

void displayVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void addElement(vector<int>& v) {
    int e;
    cout << "Enter an element to add: ";
    cin >> e;
    v.push_back(e);
}

void removeElement(vector<int>& v) {
    int i;
    cout << "Enter the index of the element to remove: ";
    cin >> i;
    if (i >= 0 && i < v.size()) {
        v.erase(v.begin() + i);
    } else {
        cout << "Invalid index!" << endl;
    }
}

int main() {
    vector<int> v;

    int c;
    do {
        cout << "1. Add element" << endl;
        cout << "2. Remove element" << endl;
        cout << "3. Display vector" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;

        switch (c) {
            case 1:
                addElement(v);
                break;
            case 2:
                removeElement(v);
                break;
            case 3:
                cout << "Vector: ";
                displayVector(v);
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (c != 4);

    return 0;
}
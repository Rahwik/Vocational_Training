//reverse a vector
#include<iostream>
#include <vector>

using namespace std;

void reverseVector(vector<int>& v) {
    int a = 0;
    int b = v.size() - 1;
    while (a < b) {
        int c = v[a];
        v[a] = v[b];
        v[b] = c;
        a++;
        b--;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    reverseVector(v);

    cout << "Reversed vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
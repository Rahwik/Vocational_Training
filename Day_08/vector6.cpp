//swap the elements
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swapElements(vector<int>& vec, int i, int j) {
    swap(vec[i], vec[j]);
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    swapElements(vec, 1, 3);
    cout << "Vector after swapping elements at index 1 and 3: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
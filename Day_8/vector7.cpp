//move zeros at the end and arrange the non-zero elemnts
#include <iostream>
#include <vector>

using namespace std;

void mZero(vector<int>& vec) {
    int count = 0; 
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] != 0) {
            swap(vec[count], vec[i]);
            count++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    mZero(vec);

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
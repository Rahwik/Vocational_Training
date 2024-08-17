//create an integer array using vector with numbers counting of 5 within the range 50 to 100. constraints : exclude start and end value
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;
    for (int i = 55; i < 100; i += 5) {
        arr.push_back(i);
    }
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
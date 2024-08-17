#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;
    for (auto i = 55; i < 100; i += 5) {
        arr.push_back(i);
    }
    for (auto num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
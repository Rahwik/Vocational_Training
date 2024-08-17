#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;
    for (auto i = 55; i < 100; i += 5) {
        arr.push_back(i);
    }
    
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
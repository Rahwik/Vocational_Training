#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    for (auto elem : vec) {
        cout << elem << " ";
    }
    
    return 0;
}
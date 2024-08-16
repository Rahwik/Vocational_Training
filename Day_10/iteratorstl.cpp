#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>::iterator it = vec.begin();

    while (it != vec.end()) {
        cout << *it << " ";
        ++it;
    }
    
    return 0;
}

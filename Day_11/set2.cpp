#include <set>
#include <iostream>

using namespace std;

int main() {
    set<int> numbers = {3, 0, 7, 9};

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
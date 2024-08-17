#include <set>
#include <iostream>

using namespace std;

int main() {
    set<int> numbers;
    numbers.emplace(3);
    numbers.emplace(0);
    numbers.emplace(7);
    numbers.emplace(9);

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
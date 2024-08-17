#include <set>
#include <iostream>

using namespace std;

int main() {
    set<int> numbers;
    numbers.insert(3));
    numbers.insert(0);
    numbers.insert(7); 
    numbers.insert(9);

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
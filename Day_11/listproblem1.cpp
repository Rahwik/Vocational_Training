// Create a list of integers with the values {5, 4, 3, 2, 1}. Reverse the list and print the reversed list
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> L = {5, 4, 3, 2, 1};

    L.reverse();

    cout << "Reversed list: ";
    for (int i : L) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
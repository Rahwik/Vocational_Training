//Unique Elements in a ListCreate a list of integers with the values {1, 2, 2, 3, 4, 4, 5}.Remove the duplicate elements and print the resulting list.
#include <iostream>
#include <list>
#include <set>

using namespace std;

int main() {
    list<int> L = {1, 2, 2, 3, 4, 4, 5};

    set<int> SetD(L.begin(), L.end());

    cout << "Unique elements: ";
    for (int i : SetD) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
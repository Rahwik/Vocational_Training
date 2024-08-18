//sorting a listcreate a list of integers with teh values {10,1,7,5,3}. sort the list in ascending order and print the sorted array
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> L = {10, 1, 7, 5, 3};

    L.sort(); 
    
    cout << "Sorted list: ";
    for (int i : L) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
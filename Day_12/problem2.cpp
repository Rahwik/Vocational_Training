// 2. Find Duplicate Element
// Problem Statement: Write a program to find any one duplicate element in an array that contains duplicates. The array may have more than one duplicate, but you need to find and return just one of them.
// Example:
//   - Input: arr[] = {1, 3, 4, 2, 2}
//   - Output: 2
//   Explanation : The element 2 is the duplicate in the array.
#include <iostream>
#include <set>

using namespace std;

int findDuplicate(int arr[], int n) {
    set<int> s;
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) != s.end()) {
            return arr[i];
        }
        s.insert(arr[i]);
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int duplicate = findDuplicate(arr, n);
    if (duplicate != -1) {
        cout << "The duplicate element is " << duplicate << endl;
    } else {
        cout << "No duplicate element found" << endl;
    }
    return 0;
}
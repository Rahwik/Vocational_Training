// 1. Find First Repeating Element: 
//  Problem Statement : Write a program to find the first repeating element in an array. The first repeating element is the one that occurs more than once and whose index of first occurrence is the smallest.

//  Example :
//   - Input: arr[] = {10, 5, 3, 4, 3, 5, 6}
//   - Output: 5
//   Explanation- 5 is the first element that repeats. The element 3 also repeats, but 5 occurs first at index 1, while 3 first occurs at index 2.
#include <iostream>

using namespace std;

int fRepeat(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = fRepeat(arr, n);
    if (result != -1) {
        cout << "The first repeating element is " << result << endl;
    } else {
        cout << "No repeating element found" << endl;
    }
    return 0;
}
// 3. Find Second Largest Element
// Problem Statement: Write a program to find the second largest element in an array. The second largest element is the one that is smaller than the largest but larger than all other elements.
// Example:
//   - Input: arr[] = {12, 35, 1, 10, 34, 1}
//   - Output: 34
//  Explanation : The largest element is 35, and the second largest is 34.
#include<iostream>
using namespace std;

int SLarge(int arr[], int n) {
    int b = arr[0];
    int s = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > b) {
            s = b;
            b = arr[i];
        } else if (arr[i] > s && arr[i] != b) {
            s = arr[i];
        }
    }

    return s;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = SLarge(arr, n);

    cout << "Second largest element is " << secondLargest << endl;

    return 0;
}
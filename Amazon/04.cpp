// Find Missing Number in Array: Given an array of N-1 numbers, find the missing number in the range 1 to N.
#include <iostream>
using namespace std;

// Function to find the missing number in the array
int findMissingNumber(int arr[], int n) {
    int expectedSum = (n + 1) * (n + 2) / 2; // Calculate the sum of numbers from 1 to N
    int actualSum = 0;
    
    // Calculate the sum of the numbers in the array
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
    // The missing number is the difference between the expected sum and the actual sum
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int missingNumber = findMissingNumber(arr, n);
    
    cout << "The missing number is: " << missingNumber << endl;
    
    return 0;
}
// Reverse Digits: Reverse the digits of a number and find palindrome
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void reverse(int n, int arr[]) {
    int i = 0;
    while (n != 0) {
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int size = 0;
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        size++;
    }

    int* arr = new int[size];

    reverse(n, arr);

    if (isPalindrome(arr, size)) {
        cout << "It is a palindrome " << endl;
    } else {
        cout << "It is not a palindrome " << endl;
    }

    delete[] arr;
    return 0;
}
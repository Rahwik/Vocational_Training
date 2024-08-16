#include <iostream>
using namespace std;

void productArray(int arr[], int n) {
    if (n == 1) {
        cout << 0;
        return;
    }

    int* prod = new int[n];
    prod[0] = 1;

    // Calculate the running product from the left
    for (int i = 1; i < n; i++) {
        prod[i] = arr[i - 1] * prod[i - 1];
    }

    // Calculate the running product from the right and multiply with the left product
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        prod[i] *= right;
        right *= arr[i];
    }

    // Print the product array
    for (int i = 0; i < n; i++) {
        cout << prod[i] << " ";
    }

    delete[] prod;
}

int main() {
    int arr[] = {10, 3, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The product array is: \n";
    productArray(arr, n);
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Maximum element of the array: ";
    int MAX = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > MAX) {
            MAX = arr[i];
        }
    }
    cout << MAX << endl;

    return 0;
}
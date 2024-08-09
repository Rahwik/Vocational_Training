#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size][size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "First row elements: ";
    for (int j = 0; j < size; j++) {
        cout << arr[0][j] << " ";
    }
    cout << endl;

    cout << "The entire array is: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size][size];
    cout << "Enter the elements of the First array: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    int Arr[size][size];
    cout << "Enter the elements of the Second array: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> Arr[i][j];
        }
    }

    int sum[size][size];
    int diff[size][size];
    int mult[size][size];

    // Calculate sum
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sum[i][j] = arr[i][j] + Arr[i][j];
        }
    }

    // Calculate difference
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            diff[i][j] = arr[i][j] - Arr[i][j];
        }
    }

    // Calculate multiplication
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            mult[i][j] = arr[i][j] * Arr[i][j];
        }
    }

    // Print results
    cout << "Sum of the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Difference of the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Multiplication of the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of the 2D array 1: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of the 2D array 2: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << Arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
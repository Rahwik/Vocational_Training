#include <iostream>
using namespace std;

void readMatrix(int arr[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }
}

// Function to print matrix elements
void printMatrix(int arr[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the matrix (max 10): ";
    cin >> size;

    if (size > 10) {
        cout << "Error: Matrix size cannot be greater than 10." << endl;
        return 1;
    }

    int matrix1[10][10];
    cout << "Enter the elements of the first matrix:" << endl;
    int matrix1[][] = readMatrix(matrix1, size);

    int matrix2[10][10];
    cout << "Enter the elements of the second matrix:" << endl;
    int matrix[][] = readMatrix(matrix2, size);

    int sum[10][10];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Sum of the matrices:" << endl;
    printMatrix(sum, size);

    return 0;
}
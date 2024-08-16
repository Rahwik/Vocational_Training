#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int (*fp)(int, int);
    fp = add;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << (*fp)(num1, num2) << endl;

    cout << "Before swapping: " << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    swap(&num1, &num2);

    cout << "After swapping: " << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}
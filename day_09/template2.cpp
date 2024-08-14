#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &num1, T &num2)
{
    T temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1 = 2;
    int num2 = 3;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    mySwap<int>(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    double num3 = 2.2;
    double num4 = 3.3;
    cout << "Before swapping: num3 = " << num3 << ", num4 = " << num4 << endl;
    mySwap<double>(num3, num4);
    cout << "After swapping: num3 = " << num3 << ", num4 = " << num4 << endl;

    return 0;
}

#include <iostream>
using namespace std;

template <typename T>
T max(T num1, T num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int result1;
    double result2;
    result1 = max<int>(2, 3);
    cout << "max(2, 3) = " << result1 << endl;
    result2 = max<double>(2.2, 3.3);
    cout << "max(2.2, 3.3) = " << result2 << endl;

    return 0;
}
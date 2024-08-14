#include <iostream>
#include <vector>
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
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<double> vec2 = {1.1, 2.2, 3.3, 4.4, 5.5};

    int result1 = max(vec1[0], vec1[4]);
    double result2 = max(vec2[0], vec2[4]);

    cout << "max(" << vec1[0] << ", " << vec1[4] << ") = " << result1 << endl;
    cout << "max(" << vec2[0] << ", " << vec2[4] << ") = " << result2 << endl;

    return 0;
}
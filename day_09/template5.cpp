#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
T sum(vector<T> vec)
{
    T sum = T();
    for (T i : vec)
    {
        sum = sum + i; 
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    vector<int> vecInt(size);
    vector<string> vecStr(size);

    cout << "Enter integer elements of the vector: ";
    for (int i = 0; i < size; i++)
    {
        cin >> vecInt[i];
    }
    
    cout << "Enter string elements of the vector: ";
    for (int i = 0; i < size; i++)
    {
        cin >> vecStr[i];
    }

    int resultInt = sum(vecInt);
    string resultStr = sum(vecStr);

    cout << "Sum of all Integer elements in the vector = " << resultInt << endl;
    cout << "Sum of all String elements in the vector = " << resultStr << endl;

    return 0;
}
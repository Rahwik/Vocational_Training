#include <iostream>
using namespace std;

class OutOfRangeException
{
public:
    string what()
    {
        return "Index out of range";
    }
};

int getValueAt(int arr[], int index, int size)
{
    if (index < 0 || index >= size)
    {
        throw OutOfRangeException();
    }
    return arr[index];
}

int main()
{
    try
    {
        int arr[] = {1, 2, 3, 4, 5};
        int result = getValueAt(arr, 10, 5);
        cout << "Result: " << result << endl;
    }
    catch (OutOfRangeException &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}

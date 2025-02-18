#include <iostream>
using namespace std;

class DivideByZeroException
{
public:
    string what()
    {
        return "Division by zero is not allowed";
    }
};

int divide(int a, int b)
{
    if (b == 0)
    {
        throw DivideByZeroException();
    }
    return a / b;
}

int main()
{
    try
    {
        int result = divide(10, 0);
        cout << "Result: " << result << endl;
    }
    catch (DivideByZeroException &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}

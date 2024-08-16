#include <iostream>
using namespace std;

class NegativeValueException
{
public:
    string what()
    {
        return "Negative value is not allowed";
    }
};

int square(int a)
{
    if (a < 0)
    {
        throw NegativeValueException();
    }
    return a * a;
}

int main()
{
    try
    {
        int result = square(-5);
        cout << "Result: " << result << endl;
    }
    catch (NegativeValueException &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}

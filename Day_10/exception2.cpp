#include <iostream>
using namespace std;

class NullPointerException
{
public:
    string what()
    {
        return "Null pointer is not allowed";
    }
};

void printString(string* str)
{
    if (str == nullptr)
    {
        throw NullPointerException();
    }
    cout << "String: " << *str << endl;
}

int main()
{
    try
    {
        string* str = nullptr;
        printString(str);
    }
    catch (NullPointerException &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}

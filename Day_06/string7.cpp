#include <iostream>
#include <string>

using namespace std;

int strLen(const string &str)
{
    return str.length();
}

int main()
{
    string str = "Hello, World!";
    cout << "Length of the string: " << strLen(str) << endl;
    return 0;
}
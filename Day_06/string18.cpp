#include <iostream>
#include <string>
using namespace std;

string makePal(string &str)
{
    int begin = 0;
    int end = str.length() - 1;
    while (begin < end)
    {
        if (str[begin] < str[end])
        {
            str[end] = str[begin];
        }
        else
        {
            str[begin] = str[end];
        }
        begin++;
        end--;
    }
    return str;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string str1 = makePal(input);
    cout << "Palindrome of the string entered." << str1 << endl;
    return 0;
}
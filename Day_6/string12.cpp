#include <string>
#include <iostream>

using namespace std;

string revStr(string str)
{
    string rev = str;
    for (int i = 0; i < rev.length() / 2; i++)
    {
        char temp = rev[i];
        rev[i] = rev[rev.length() - i - 1];
        rev[rev.length() - i - 1] = temp;
    }
    return rev;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string rev = revStr(str);

    cout << "Reversed string: " << rev << endl;

    return 0;
}
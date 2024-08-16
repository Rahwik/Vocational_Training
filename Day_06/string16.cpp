#include <iostream>
#include <string>
using namespace std;

bool isPal(string &str)
{
    int begin = 0;
    int end = str.length() - 1;
    while (begin < end)
    {
        if (str[begin] != str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}

string lnpn(string &str)
{
    string lnp = "";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j <= str.length(); j++)
        {
            string substr = str.substr(i, j - i);
            if (!isPal(substr) && substr.length() > lnp.length())
            {
                lnp = substr;
            }
        }
    }
    return lnp;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string lnp = lnpn(input);
    if (lnp.empty())
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The longest non-palindromic substring is: " << lnp << endl;
    }

    return 0;
}
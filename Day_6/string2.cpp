#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "the##hello##is is secrect##world!##";
    string result = "";
    bool print = false;


    string str1 = str;

    while(str1.find("##") != string::npos)
    {
        size_t pos = str1.find("##");
        str1.replace(pos, 2, " ");
        print = true;
        }

    cout << str << endl;
    cout << str1 <<endl;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '#' && str[i + 1] == '#')
        {
            print = !print;
            i++;
        }
        else if (print)
        {
            result += str[i];
        }
    }

    cout << result << endl;
    string erased = result;
    erased.erase(5, 5);
    cout << erased << endl;

    return 0;
}
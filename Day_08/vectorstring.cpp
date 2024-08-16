#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> strVector;
    string input;

    cout << "Enter the states of the USA (type 'exit' to stop):" << endl;

    while (true)
    {
        cin >> input;
        if (input == "exit")
        {
            break;
        }
        strVector.push_back(input);
    }

    cout << "You entered the following strings:" << endl;
    for (string const &str : strVector)
    {
        cout << str << endl;
    }

    return 0;
}
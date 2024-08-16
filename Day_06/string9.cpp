#include <iostream>
#include <string>
using namespace std;

int main()
{
    string scramble = "loHe llWor d";
    string unscramble = "";
    string unsc1 = scramble.substr(2, 2);
    string unsc2 = scramble.substr(0, 2);
    string unsc3 = scramble.substr(5, 1);
    string unsc7 = scramble.substr(4, 1);
    string unsc4 = scramble.substr(7, 3);
    string unsc5 = scramble.substr(6, 1);
    string unsc6 = scramble.substr(11, 1);

    unscramble = unsc1 + unsc3 + unsc2 + unsc7 + unsc4 + unsc5 + unsc6;

    cout << "Unscrambled message: " << unscramble << endl;

    return 0;
}
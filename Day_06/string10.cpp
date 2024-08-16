#include <iostream>
#include <string>
using namespace std;

int main()
{
    // aspirant!
    string scramble = "anshi! pirat";
    string unscramble = "";
    string unsc7 = scramble.substr(3, 4);
    string unsc1 = scramble.substr(0, 1);
    string unsc2 = scramble.substr(2, 1);
    string unsc3 = scramble.substr(7, 4);
    string unsc4 = scramble.substr(1, 1);
    string unsc5 = scramble.substr(11, 1);
    // string unsc6 = scramble.substr(5, 1);

    unscramble = unsc7 + unsc1 + unsc2 + unsc3 + unsc4 + unsc5;

    cout << "Unscrambled message: " << unscramble << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n = 64;

    for (int y = n - 1; y >= 0; y--) {

        // Printing space until the value of y
        for (int i = 0; i < y; i++) {
            cout << " ";
        }

        // Printing '*'
        for (int x = 0; x + y < n; x++) {
            if (x & y)
                cout << "  ";
            else
                cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

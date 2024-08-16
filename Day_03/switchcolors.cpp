#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1-7) to represent a rainbow color: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Your color is Red";
            break;
        case 2:
            cout << "Your color is Orange";
            break;
        case 3:
            cout << "Your color is Yellow";
            break;
        case 4:
            cout << "Your color is Green";
            break;
        case 5:
            cout << "Your color is Blue";
            break;
        case 6:
            cout << "Your color is Indigo";
            break;
        case 7:
            cout << "Your color is Violet";
            break;
        default:
            cout << "Invalid input. Please enter a rainbow color between 1 and 7.";
            break;
    }

    return 0;
}
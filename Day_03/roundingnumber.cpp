#include <iostream>
#include <cmath>
using namespace std;
class Rounder {
private:
    double number;

public:
    // Constructor to initialize the number
    Rounder(double num) {
        number = num;
    }

    // Function to round off the number
    double roundOff() {
        return round(number);
    }
};

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    Rounder rounder(num);
    double roundedNum = rounder.roundOff();

    cout << "Rounded number: " << roundedNum << endl;

    return 0;
}
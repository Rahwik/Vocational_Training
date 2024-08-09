// Cube Root Calculation: Write a function to calculate the cube root of a number.
#include <iostream>
#include <cmath>

using namespace std;

double calculateCubeRoot(double num) {
    if (num < 0) {
        throw runtime_error("Cube root of negative numbers is not a real number.");
    }

    double cbrtNum = cbrt(num);
    return cbrtNum;
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        double cubeRoot = calculateCubeRoot(num);
        cout << "The cube root of the number is: " << cubeRoot << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
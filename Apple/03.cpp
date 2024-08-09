// Check for Perfect Cube: Determine if a number is a perfect cube.
#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectCube(int num) {
    if (num < 0) {
        return false;
    }

    int cbrtNum = round(cbrt(num));
    return cbrtNum * cbrtNum * cbrtNum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectCube(num)) {
        cout << num << " is a perfect cube." << endl;
    } else {
        cout << num << " is not a perfect cube." << endl;
    }

    return 0;
}
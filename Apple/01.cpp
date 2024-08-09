//Perfect Square Check: Check if a number is a perfect square. 
#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) {
        return false;
    }

    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num)) {
        cout << num << " is a perfect square." << endl;
    } else {
        cout << num << " is not a perfect square." << endl;
    }

    return 0;
}
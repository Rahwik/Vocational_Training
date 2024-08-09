//Square Root Calculation: Implement a function to find the square root of a number. 
#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) {
        return false;
    }

    int sqrtNum = sqrt(num);
    cout<<"The square root of the number of is 
    : "<<sqrtNum<<endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    isPerfectSquare(num);

    return 0;
}
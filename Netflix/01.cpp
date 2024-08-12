//Strong Number Check: Check if a number is a strong number. 
#include<iostream>
using namespace std;

int fact(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int sumFact(int n) {
    int sum = 0;
    while(n != 0) {
        int digit = n % 10;
        sum += fact(digit);
        n /= 10;
    }
    return sum;
}

bool SNum(int n) {
    return n == sumFact(n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(SNum(num)) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }
    return 0;
}
using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number: " << reverse(n) << endl;
    return 0;
}
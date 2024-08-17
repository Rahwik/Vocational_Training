#include <iostream>

using namespace std;

bool problem(const int a[], int n, const int b[], int m) {
    for (int x : a) {
        for (int y : b) {
            if (x == y) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int b[] = {6, 7, 8, 2, 9};
    int m = sizeof(b) / sizeof(b[0]);

    if (problem(a, n, b, m)) {
        cout << "The arrays contain similar elements." << endl;
    } else {
        cout << "The arrays do not contain similar elements." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

template <class T, class U>
class Pair {
private:
    T first;
    U second;

public:
    Pair(T f, U s) : first(f), second(s) {
        cout << "Inside constructor" << endl;
    }

    T getFirst() {
        return first;
    }

    U getSecond() {
        return second;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);
    Pair<string, char> p2("Hello", 'A');

    cout << "Pair 1: " << p1.getFirst() << ", " << p1.getSecond() << endl;
    cout << "Pair 2: " << p2.getFirst() << ", " << p2.getSecond() << endl;

    return 0;
}
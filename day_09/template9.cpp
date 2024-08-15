#include <iostream>
#include<string>
using namespace std;

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 f, T2 s) : first(f), second(s) {}

    void print() {
        cout << "(" << first<<second << ")" << endl;
    }
};

int main() {
    Pair<char, string> p1('R', "ahul prasad");
    p1.print();

    return 0;
}
#include <iostream>
#include <queue>

using namespace std;

void reverse(queue<int>& q) {
    if (q.empty()) {
        return;
    }
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

void reverseAfterMiddle(queue<int>& q) {
    if (q.empty()) {
        return;
    }

    int mid = q.size() / 2;
    queue<int> t;

    for (int i = 0; i < mid; i++) {
        t.push(q.front());
        q.pop();
    }

    reverse(q);

    while (!q.empty()) {
        t.push(q.front());
        q.pop();
    }

    while (!t.empty()) {
        q.push(t.front());
        t.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Original queue: ";
    queue<int> t = q;
    while (!t.empty()) {
        cout << t.front() << " ";
        t.pop();
    }
    cout << endl;

    reverseAfterMiddle(q);

    cout << "Reversed queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
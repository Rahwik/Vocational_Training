// first line of input should indicate queue size
// second line of input should take elements of queue
// third line of input should indicate k value
// If either queue size or k value <=0 it should be treated with same output given in sample testcase
// Input Format

// 5 1 2 3 4 5 3

// Constraints

// first line of input should indicate queue size
// second line of input should take elements of queue
// third line of input should indicate k value
// If either queue size or k value <=0 it should be treated with same output given in sample testcase
// Output Format

// 3 2 1 4 5
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int queueSize;
    cin >> queueSize;
    
    if (queueSize <= 0) {
        cout << "invalid k value" << endl;
        return 0;
    }

    queue<int> q;
    for (int i = 0; i < queueSize; ++i) {
        int element;
        cin >> element;
        q.push(element);
    }

    int k;
    cin >> k;

    if (k <= 0 || k > queueSize) {
        cout << "invalid k value" << endl;
        return 0;
    }

    stack<int> s;
    for (int i = 0; i < k; ++i) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < queueSize - k; ++i) {
        q.push(q.front());
        q.pop();
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

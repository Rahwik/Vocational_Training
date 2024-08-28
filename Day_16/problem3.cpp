// You need to implement a stack using two queues. The stack should support the following operations:

// push(x) - Pushes element x onto the stack.
// pop() - Removes the element on the top of the stack.
// top() - Returns the element on the top of the stack.
// empty() - Returns true if the stack is empty, false otherwise.
// Implement these operations such that the stack behaves in a Last-In-First-Out (LIFO) manner.

// Input Format

// The first line contains an integer n, the number of operations to be performed on the stack. The next n lines contain one of the following operations:

// "push x" where x is an integer: Push the integer x onto the stack.
// "pop": Remove the top element from the stack.
// "top": Print the top element of the stack.
// "empty": Print true if the stack is empty, otherwise print false.
// Constraints

// 1 <= n <= 1000
// -10^9 <= x <= 10^9
// The "pop" and "top" operations are guaranteed to be called only when the stack is non-empty.
// Output Format

// For each "top" operation, print the top element of the stack.
// For each "empty" operation, print true or false.

#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q1, q2;
    
public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    
    void pop() {
        if (!q1.empty()) {
            q1.pop();
        }
    }
    
    int top() {
        if (!q1.empty()) {
            return q1.front();
        }
        return -1;
    }
    
    bool empty() {
        return q1.empty();
    }
};

int main() {
    int n;
    cin >> n;
    Stack s;
    
    for (int i = 0; i < n; ++i) {
        string operation;
        cin >> operation;
        
        if (operation == "push") {
            int x;
            cin >> x;
            s.push(x);
        } else if (operation == "pop") {
            s.pop();
        } else if (operation == "top") {
            cout << s.top() << endl;
        } else if (operation == "empty") {
            cout << (s.empty() ? "true" : "false") << endl;
        }
    }
    
    return 0;
}

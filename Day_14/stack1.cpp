#include <iostream>
#include <stack>

using namespace std;

class Stack {
private:
    stack<int> s;

public:
    void push(int value) {
        s.push(value);
    }

    void pop() {
        if (!s.empty()) {
            s.pop();
        } else {
            cout << "Stack is empty." << endl;
        }
    }

    int top() {
        if (!s.empty()) {
            return s.top();
        } else {
            cout << "Stack is empty." << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return s.empty();
    }

    int getSize() {
        return s.size();
    }
};

int main() {
    Stack s;

    s.push(9);
    s.push(8);
    s.push(7);

    cout << s.top() << " popped from stack" << endl;
    s.pop();

    cout << "Top element is: " << s.top() << endl;

    cout << "Is the stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    cout << "Stack size: " << s.getSize() << endl;

    return 0;
}
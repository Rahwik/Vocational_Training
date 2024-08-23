#include <iostream>

using namespace std;

class Stack {
    int top;
    static const int MAX = 1000;
    int arr[MAX];

public:

    Stack() : top(-1) {}

    bool push(int x) {
        if (top >= MAX-1) {
            cout << "Stack Overflow";
            return false;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow";
            return 0;
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty";
            return 0;
        }
        return arr[top];
    }
    
    bool isEmpty() {
        return top < 0;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " popped from stack\n";

    cout << "Top element is: " << s.peek() << endl;

    cout << "Is the stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
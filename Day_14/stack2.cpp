#include <iostream>

using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top < capacity - 1) {
            arr[++top] = value;
        } else {
            cout << "Stack is full." << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack is empty." << endl;
        }
    }

    int getTop() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty." << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    int getSize() {
        return top + 1;
    }

    void clear() {
        top = -1;
    }

    int findElement(int value) {
        for (int i = 0; i <= top; i++) {
            if (arr[i] == value) {
                return i;
            }
        }
        return -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s(5);

    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(5);

    cout << s.getTop() << " popped from stack" << endl;
    s.pop();

    cout << "Top element is: " << s.getTop() << endl;

    cout << "Is the stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    cout << "Stack size: " << s.getSize() << endl;

    s.display();

    int index = s.findElement(8);
    if (index != -1) {
        cout << "Element Found : " << index << endl;
    } else {
        cout << "Element not found in stack" << endl;
    }

    s.clear();

    return 0;
}
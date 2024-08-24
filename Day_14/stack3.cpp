#include <iostream>

using namespace std;

const int MAX_SIZE = 5;
int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = value;
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
        return stack[top];
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
        if (stack[i] == value) {
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
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(9);
    push(8);
    push(7);
    push(6);
    push(5);

    cout << getTop() << " popped from stack" << endl;
    pop();

    cout << "Top element is: " << getTop() << endl;

    cout << "Is the stack empty? " << (isEmpty() ? "Yes" : "No") << endl;

    cout << "Stack size: " << getSize() << endl;

    display();

    int index = findElement(8);
    if (index != -1) {
        cout << "Element Found : " << index << endl;
    } else {
        cout << "Element not found in stack" << endl;
    }

    clear();

    return 0;
}
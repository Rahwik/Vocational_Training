#include <iostream>

using namespace std;

class Stack {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        } else {
            cout << "Stack is empty." << endl;
        }
    }

    int getTop() {
        if (top != nullptr) {
            return top->data;
        } else {
            cout << "Stack is empty." << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == nullptr;
    }

    int getSize() {
        int size = 0;
        Node* temp = top;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        return size;
    }

    void clear() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    int findElement(int value) {
        int index = 0;
        Node* temp = top;
        while (temp != nullptr) {
            if (temp->data == value) {
                return index;
            }
            index++;
            temp = temp->next;
        }
        return -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            Node* temp = top;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};3

int main() {
    Stack stack;

    stack.push(9);
    stack.push(8);
    stack.push(7);
    stack.push(6);
    stack.push(5);

    cout << stack.getTop() << " popped from stack" << endl;
    stack.pop();

    cout << "Top element is: " << stack.getTop() << endl;

    cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    cout << "Stack size: " << stack.getSize() << endl;

    stack.display();

    int index = stack.findElement(8);
    if (index != -1) {
        cout << "Element Found : " << index << endl;
    } else {
        cout << "Element not found in stack" << endl;
    }

    stack.clear();

    return 0;
}
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    int dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        Node* temp = front;
        int val = front->data;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        return val;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    int frontElement() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }
};

class Stack {
private:
    Queue q1, q2;

public:
    void push(int val) {
        q2.enqueue(val);
        while (!q1.isEmpty()) {
            q2.enqueue(q1.dequeue());
        }
        swap(q1, q2);
    }

    int pop() {
        if (q1.isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q1.dequeue();
    }

    int top() {
        if (q1.isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q1.frontElement();
    }

    bool isEmpty() {
        return q1.isEmpty();
    }

    void swap(Queue& q1, Queue& q2) {
        Queue temp = q1;
        q1 = q2;
        q2 = temp;
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.top() << endl;

    cout << "Popped element: " << myStack.pop() << endl;

    cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
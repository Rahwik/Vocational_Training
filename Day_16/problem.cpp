#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() { top = nullptr; }

    void push(int data) {
        Node* newNode = new Node();
        if (!newNode) {
            cout << "Stack Overflow" << endl;
            exit(1);
        }
        newNode->data = data;
        newNode->next = top;
        top = newNode;
    }

    int size() {
        int count = 0;
        Node* temp = top;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    int findMiddle() {
        int stackSize = size();
        if (stackSize % 2 == 0) { 
            Node* temp = top;
            for (int i = 0; i < stackSize / 2 - 1; i++) {
                temp = temp->next;
            }
            return (temp->data + temp->next->data) / 2;
        } else { 
            Node* temp = top;
            for (int i = 0; i < stackSize / 2; i++) {
                temp = temp->next;
            }
            return temp->data;
        }
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    cout << "Middle Element: " << stack.findMiddle() << endl;
    return 0;
}
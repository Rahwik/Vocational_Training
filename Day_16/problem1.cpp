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

    int findMiddle() {
        Node* slow = top;
        Node* fast = top;
        int count = 0;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            count++;
        }
        if (count % 2 == 0) {
            Node* prevSlow = top;
            for (int i = 0; i < count; i++) {
                prevSlow = prevSlow->next;
            }
            return (prevSlow->data + slow->data) / 2;
        } else {
            return slow->data;
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
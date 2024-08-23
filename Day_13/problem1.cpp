#include <iostream>
using namespace std;

class Node {
public:
    float data;
    Node* next;
    Node() : data(0.0), next(NULL) {}
    Node(float data) : data(data), next(NULL) {}
};

class Linkedlist {
    Node* head;
public:
    Linkedlist() : head(NULL) {}
    void insertNode(float data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }
        while (temp != NULL) {
            cout << temp->data << " => ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Linkedlist list;
    list.insertNode(1.2);
    list.insertNode(2.3);
    list.insertNode(3.9);
    list.insertNode(4.0);
    list.printList();
    return 0;
}
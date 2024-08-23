// #include <iostream>
// using namespace std;

// class Node {
// public:
//     float data;
//     Node* next;

//     Node(float data, Node* next = nullptr) : data(data), next(next) {}
// };

// class LinkedList {
//     Node* head;

// public:
//     LinkedList(Node* head = nullptr) : head(head) {}

//     void insertNode(float data) {
//         Node* newNode = new Node(data);
//         if (head == nullptr) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }

//     void printList() {
//         Node* temp = head;
//         if (head == nullptr) {
//             cout << "List empty" << endl;
//             return;
//         }
//         while (temp != nullptr) {
//             cout << temp->data << " => ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main() {
//     LinkedList list(nullptr);
//     list.insertNode(1.2);
//     list.insertNode(2.3);
//     list.insertNode(3.9);
//     list.insertNode(4.0);
//     list.printList();
//     return 0;
// }
#include <iostream>
using namespace std;

class Node {
public:
    float data;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList(Node* head = nullptr) : head(head) {}

    void insertNode(float data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        if (head == nullptr) {
            cout << "List empty" << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->data << " => ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list(nullptr);
    list.insertNode(1.2);
    list.insertNode(2.3);
    list.insertNode(3.9);
    list.insertNode(4.0);
    list.printList();
    return 0;
}
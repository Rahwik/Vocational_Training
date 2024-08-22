#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void push_back(int data) {
        Node* newNode = new Node(data);

        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtPosition(int position, int data) {
        Node* newNode = new Node(data);
        Node* temp = head;
        int count = 1;

        if (position == 1) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else {
            while (temp && count < position - 1) {
                temp = temp->next;
                count++;
            }

            if (temp) {
                newNode->next = temp->next;
                newNode->prev = temp;
                temp->next = newNode;

                if (newNode->next)
                    newNode->next->prev = newNode;
                else
                    tail = newNode;
            }
        }
    }

    void deleteAtPosition(int position) {
        Node* temp = head;
        int count = 1;

        if (position == 1) {
            head = head->next;
            if (head)
                head->prev = nullptr;
            else
                tail = nullptr;
            delete temp;
        } else {
            while (temp && count < position - 1) {
                temp = temp->next;
                count++;
            }

            if (temp && temp->next) {
                Node* nodeToDelete = temp->next;
                temp->next = nodeToDelete->next;
                if (nodeToDelete->next)
                    nodeToDelete->next->prev = temp;
                else
                    tail = temp;
                delete nodeToDelete;
            }
        }
    }

    void printForward() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int length() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void Reverse() {
        Node* temp = tail;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cout << "Enter element " << i + 1 << ": ";
        cin >> data;
        dll.push_back(data);
    }

    cout << "Forward: ";
    dll.printForward();

    int position, value;
    cout << "Enter the position to insert: ";
    cin >> position;
    cout << "Enter the value to insert: ";
    cin >> value;
    dll.insertAtPosition(position, value);

    cout << "Forward: ";
    dll.printForward();

    int deletePosition;
    cout << "Enter the position to delete: ";
    cin >> deletePosition;
    dll.deleteAtPosition(deletePosition);

    cout << "Forward: ";
    dll.printForward();

    cout << "Reverse: ";
    dll.Reverse();

    cout << "Length: " << dll.length() << endl;

    return 0;
}
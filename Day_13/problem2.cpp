#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        this->head = nullptr;
    }

    // Insert a new node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (this->head == nullptr) {
            this->head = newNode;
            return;
        }
        Node* temp = this->head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to find the Nth node from the end
    int findNthFromEnd(int N) {
        Node* first = this->head;
        Node* second = this->head;

        // Move the first pointer N steps ahead
        for (int i = 0; i < N; ++i) {
            if (first == nullptr) {
                return -1;  // N is greater than the number of nodes in the list
            }
            first = first->next;
        }

        // Move both pointers until the first reaches the end
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        // Now, second is pointing to the Nth node from the end
        return (second != nullptr) ? second->data : -1;
    }

    // Function to display the linked list
    void display() {
        Node* temp = this->head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function to test the findNthFromEnd() method
int main() {
    SinglyLinkedList list;
    
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.insertAtEnd(5);

    cout << "Original list: ";
    list.display();

    int N = 2;
    int result = list.findNthFromEnd(N);

    if (result != -1) {
        cout << "The " << N << "th node from the end is: " << result << endl;
    } else {
        cout << "The list does not have " << N << " nodes." << endl;
    }

    return 0;
}
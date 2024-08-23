#include <iostream>

using namespace std;

class Node {
public:
    int x;
    Node* n;

    Node(int v) : x(v), n(nullptr) {}
};

class List {
private:
    Node* h;

public:
    List() : h(nullptr) {}

    void add(int v) {
        Node* newNode = new Node(v);

        if (!h) {
            h = newNode;
        } else {
            Node* t = h;
            while (t->n) {
                t = t->n;
            }
            t->n = newNode;
        }
    }

    void swap(int v1, int v2) {
        if (!h) return;

        Node* t1 = h;
        Node* t2 = h;

        while (t1 && t1->x != v1) {
            t1 = t1->n;
        }

        while (t2 && t2->x != v2) {
            t2 = t2->n;
        }

        if (!t1 || !t2) return;

        int temp = t1->x;
        t1->x = t2->x;
        t2->x = temp;
    }

    void print() {
        Node* t = h;
        while (t) {
            cout << t->x << " ";
            t = t->n;
        }
        cout << endl;
    }
};

int main() {
    List l;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int v;
        cout << "Enter element " << i + 1 << ": ";
        cin >> v;
        l.add(v);
    }

    cout << "List: ";
    l.print();

    int v1, v2;
    cout << "Enter two elements to swap: ";
    cin >> v1 >> v2;
    l.swap(v1, v2);

    cout << "List after swap: ";
    l.print();

    return 0;
}
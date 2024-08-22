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

    void del(int v) {
        if (!h) return;

        if (h->x == v) {
            Node* t = h;
            h = h->n;
            delete t;
            return;
        }

        Node* t = h;
        while (t->n) {
            if (t->n->x == v) {
                Node* nodeToDelete = t->n;
                t->n = t->n->n;
                delete nodeToDelete;
                return;
            }
            t = t->n;
        }
    }

    int len() {
        int c = 0;
        Node* t = h;
        while (t) {
            c++;
            t = t->n;
        }
        return c;
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

    int d;
    cout << "Enter element to delete: ";
    cin >> d;
    l.del(d);

    cout << "List after deletion: ";
    l.print();

    cout << "Length: " << l.len() << endl;

    return 0;
}
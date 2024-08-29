#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    void deleteNode(int value) {
        root = deleteNode(root, value);
    }

    void printTree(Node* node) {
        if (node == nullptr) {
            return;
        }
        cout << node->data << " ";
        printTree(node->left);
        printTree(node->right);
    }

private:
    Node* insert(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }

        if (value < root->data) {
            root->left = insert(root->left, value);
        } else {
            root->right = insert(root->right, value);
        }
        return root;
    }

    Node* deleteNode(Node* root, int value) {
        if (root == nullptr) {
            return nullptr;
        }

        if (value < root->data) {
            root->left = deleteNode(root->left, value);
        } else if (value > root->data) {
            root->right = deleteNode(root->right, value);
        } else {
            if (root->left == nullptr && root->right == nullptr) {
                delete root;
                return nullptr;
            } else if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            } else {
                Node* temp = root->right;
                while (temp->left != nullptr) {
                    temp = temp->left;
                }
                root->data = temp->data;
                root->right = deleteNode(root->right, temp->data);
            }
        }
        return root;
    }
};

int main() {
    BinaryTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);

    tree.deleteNode(20);

    cout << "Tree after deletion: ";
    tree.printTree(tree.root);
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Define a class for the binary tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Define a class for the binary tree
class BinaryTree {
public:
    Node* root;

    // Constructor
    BinaryTree() {
        root = nullptr;
    }

    // Function to insert a node in the binary tree
    void insert(int value) {
        root = insert(root, value);
    }

    // Function to search a node in the binary tree
    bool search(int value) {
        return search(root, value);
    }

    // Function to delete a node in the binary tree
    void deleteNode(int value) {
        root = deleteNode(root, value);
    }

    // Function for in-order traversal
    void inOrderTraversal() {
        inOrderTraversal(root);
        cout << endl;
    }

private:
    Node* insert(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }

        if (root->left == nullptr) {
            root->left = insert(root->left, value);
        } else if (root->right == nullptr) {
            root->right = insert(root->right, value);
        } else {
            // Insert in the left subtree if both children are present
            root->left = insert(root->left, value);
        }
        return root;
    }

    bool search(Node* root, int value) {
        if (root == nullptr) {
            return false;
        }

        if (root->data == value) {
            return true;
        }

        return search(root->left, value) || search(root->right, value);
    }

    Node* deleteNode(Node* root, int value) {
        if (root == nullptr) {
            return nullptr;
        }

        if (root->data == value) {
            // Node with only one child or no child
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node* temp = findMin(root->right);

            // Copy the inorder successor's content to this node
            root->data = temp->data;

            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->data);
        } else {
            root->left = deleteNode(root->left, value);
            root->right = deleteNode(root->right, value);
        }
        return root;
    }

    Node* findMin(Node* root) {
        while (root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    void inOrderTraversal(Node* root) {
        if (root == nullptr) {
            return;
        }
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
};

int main() {
    BinaryTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);

    cout << "Search 30: " << (tree.search(30) ? "Found" : "Not Found") << endl;
    cout << "Search 25: " << (tree.search(25) ? "Found" : "Not Found") << endl;

    tree.deleteNode(20);

    cout << "In-order Traversal after deletion: ";
    tree.inOrderTraversal();

    return 0;
}
#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
public:
    Node *root = nullptr;

    void insert(int value)
    {
        root = insertRecursive(root, value);
    }

    void levelOrderTraversal()
    {
        if (root == nullptr)
            return;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }

private:
    Node *insertRecursive(Node *node, int value)
    {
        if (node == nullptr)
            return new Node(value);
        if (node->left == nullptr)
            node->left = insertRecursive(node->left, value);
        else
            node->right = insertRecursive(node->right, value);
        return node;
    }
};

int main()
{
    BinaryTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);

    cout << "Level Order Traversal: ";
    tree.levelOrderTraversal();

    return 0;
}
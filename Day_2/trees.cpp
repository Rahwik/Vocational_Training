#include <iostream>
#include <string>

using namespace std;

class Tree {
private:
    int leaf1;
    int leaf2;
    string treename;

public:
    // Constructor
    Tree(int l1, int l2, const string &name) : leaf1(l1), leaf2(l2), treename(name) {}

    // Get the total number of leaves
    int getNumberOfLeaves() const {
        return leaf1 + leaf2;
    }

    // Set the number of leaves
    void setLeaves(int n1, int n2) {
        leaf1 = n1;
        leaf2 = n2;
    }

    // Set the tree name
    void setTreeName(const string &name) {
        treename = name;
    }

    // Display tree information
    void displayInfo() const {
        cout << "Tree Name: " << treename << endl;
        cout << "Number of Leaves: " << getNumberOfLeaves() << endl;
    }
};

int main() {
    // Create a Tree object with initial values and name
    Tree tree(5, 7, "Oak");

    // Display initial tree information
    tree.displayInfo();

    // Update tree leaves
    tree.setLeaves(10, 15);

    // Display updated tree information
    tree.displayInfo();

    // Update tree name
    tree.setTreeName("Maple");

    // Display updated tree information
    tree.displayInfo();

    return 0;
}

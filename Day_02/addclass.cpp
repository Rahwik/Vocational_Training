#include <iostream>

using namespace std;

class Addition {
private:
    int num1;
    int num2;

public:
    // Constructor
    Addition(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int getAdd() {
        return num1 + num2;
    }

    void setAdd(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Display addition information
    void displayInfo() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
        cout << "Addition: " << getAdd() << endl;
    }
};

int main() {
    // Create an Addition object
    Addition add(5, 7);

    // Display addition information
    add.displayInfo();

    // Update addition information
    add.setAdd(10, 15);

    // Display updated addition information
    add.displayInfo();

    return 0;
}
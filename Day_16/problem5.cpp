// Insert: Add an element to the end of the queue.
// Delete: Remove the element from the front of the queue. Display “Queue is empty” if the queue is empty.
// Display: Print all elements in the queue from front to rear. Display “NULL” if the queue is empty.
// Exit: Exit the program.
// Input Format

// The first line contains the menu followed by input for the given menu.

// Constraints

// There are no specific constraints for this problem.

// Output Format

// Print the output based on the menu operations.
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int choice, element;

    cin >> choice;
    if (choice == 0) {
        while (true) {
            cin >> choice;

            switch (choice) {
                case 1:
                    cin >> element;
                    q.push(element);
                    break;

                case 2:
                    if (q.empty()) {
                        cout << "Queue is empty" << endl;
                    } else {
                        q.pop();
                    }
                    break;

                case 3:
                    if (q.empty()) {
                        cout << "NULL" << endl;
                    } else {
                        queue<int> temp = q;
                        while (!temp.empty()) {
                            cout << temp.front();
                            temp.pop();
                            if (!temp.empty()) {
                                cout << " -> ";
                            }
                        }
                        cout << endl;
                    }
                    break;

                case 4:
                    return 0;

                default:
                    cout << "Invalid option" << endl;
            }
        }
    }

    return 0;
}

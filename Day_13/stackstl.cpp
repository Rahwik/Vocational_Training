#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << " popped from stack\n";
    s.pop();

    cout << "Top element is: " << s.top() << endl;

    cout << "Is the stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
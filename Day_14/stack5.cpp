#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> stack;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            // Push opening brackets onto the stack
            stack.push(c);
        } else {
            // For closing brackets, check the top of the stack
            if (stack.empty()) return false;
            
            char top = stack.top();
            stack.pop();

            // Check if the current closing bracket matches the last opening bracket
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }

    // If the stack is empty, all brackets are matched
    return stack.empty();
}

int main() {
    string s = "{[]}";
    bool result = isValid(s);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
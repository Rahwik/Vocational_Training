#include <iostream>
#include <vector>

using namespace std;

int addNumbers(vector<int> numbers) {
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> numbers(n);
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    int sum = addNumbers(numbers);
    cout << "The sum of the numbers is: " << sum << endl;
    
    return 0;
}
#include <set>
#include <iostream>

using namespace std;

int main() {
    int arr[] = {3, 0, 7, 9};
    set<int> numbers(std::begin(arr), std::end(arr));

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
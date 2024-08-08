#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int arr[] = {1, 2, 3, 4, 5};
    //using the array
    for (int num : arr) {
        cout << num << " ";
    }
    cout<<endl;
    //using the vector
    for (int n : vec) {
        cout << n << " ";
    }
    return 0;
}
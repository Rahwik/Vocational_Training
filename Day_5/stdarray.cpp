//std::array<int,5> arr ={1,2,3,4,5};
#include <array>
#include <iostream>

using namespace std;

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    // Print the array
    for (int i = 0; i < arr.size(); i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
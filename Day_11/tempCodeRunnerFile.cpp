#include <iostream>
#include <iterator>

using namespace std;

bool problem(int nums[], int size) {
    for (int* it = begin(nums); it != end(nums); ++it) {
        for (int* jt = it + 1; jt != end(nums); ++jt) {
            if (*it == *jt) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 2, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    if (problem(nums, size)) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }
    return 0;
}
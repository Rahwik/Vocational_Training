//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include <iostream>

using namespace std;

bool problem(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] == nums[j]) {
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
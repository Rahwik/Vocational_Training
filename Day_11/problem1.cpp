#include <iostream>
#include <vector>

using namespace std;

bool problem(const vector<int>& nums) {
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        for (auto jt = it + 1; jt != nums.end(); ++jt) {
            if (*it == *jt) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 2, 4, 5};
    if (problem(nums)) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }
    return 0;
}
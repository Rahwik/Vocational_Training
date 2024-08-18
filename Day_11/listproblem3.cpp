//merging two listcreate two lists of integers:list1,list2 with values {1,3,5}and list with values {2,4,6}. merge list2 into list1 and print the merged list
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> list1 = {1, 3, 5};
    list<int> list2 = {2, 4, 6};

    list1.merge(list2);

    cout << "Merged list: ";
    for (int i : list1) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
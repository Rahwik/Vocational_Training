#include <iostream>

using namespace std;

class minheap{
    int *arr;
    int size;
    int capacity;

public:
    minheap(int c){
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i){
        return (2*i + 1);
    }

    int right(int i){
        return (2*i + 2);
    }

    int parent(int i){
        return (i - 1) / 2;
    }

    void swap(int &x, int &y){
        int temp = x;
        x = y;
        y = temp;
    }

    void insert(int x){
        if(size == capacity){
            cout << "Heap is full. Cannot insert." << endl;
            return;
        }
        size++;
        arr[size - 1] = x;
        for(int i = size - 1; i != 0 && arr[parent(i)] > arr[i];){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void printHeap(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    minheap h(10);
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(12);
    h.insert(40);
    h.insert(25);
    h.insert(18);

    cout << "Min Heap: ";
    h.printHeap();

    return 0;
}
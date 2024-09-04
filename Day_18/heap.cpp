#include<iostream>
using namespace std;

class MinHeap {
public:
    int* arr;
    int size;
    int capacity;

    MinHeap(int c) {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i) {
        return (2 * i + 1);
    }

    int right(int i) {
        return (2 * i + 2);
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    void insert(int k) {
        if (size == capacity) {
            cout << "Heap is full. Cannot insert more elements." << endl;
            return;
        }

        arr[size] = k;
        int i = size;
        size++;

        while (i != 0 && arr[parent(i)] > arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void heapify(int i) {
        int l = left(i);
        int r = right(i);
        int smallest = i;

        if (l < size && arr[l] < arr[smallest])
            smallest = l;

        if (r < size && arr[r] < arr[smallest])
            smallest = r;

        if (smallest != i) {
            swap(arr[i], arr[smallest]);
            heapify(smallest);
        }
    }

    void buildHeap() {
        for (int i = (size / 2) - 1; i >= 0; i--)
            heapify(i);
    }

    int extractMin() {
        if (size == 0) {
            cout << "Heap is empty. Cannot extract more elements." << endl;
            return -1;
        }

        if (size == 1) {
            size--;
            return arr[0];
        }

        int root = arr[0];
        arr[0] = arr[size - 1];
        size--;
        heapify(0);

        return root;
    }
};

int main() {
    MinHeap h(11);
    h.size = 10;
    h.arr[0] = 10;
    h.arr[1] = 30;
    h.arr[2] = 15;
    h.arr[3] = 20;
    h.arr[4] = 7;
    h.arr[5] = 9;
    h.arr[6] = 8;
    h.arr[7] = 12;
    h.arr[8] = 6;
    h.arr[9] = 17;

    h.buildHeap();

    cout << "Min heap: ";
    for (int i = 0; i < h.size; i++)
        cout << h.arr[i] << " ";
    cout << endl;

    cout << "Extracted min: " << h.extractMin() << endl;

    cout << "Min heap after extraction: ";
    for (int i = 0; i < h.size; i++)
        cout << h.arr[i] << " ";
    cout << endl;

    return 0;
}
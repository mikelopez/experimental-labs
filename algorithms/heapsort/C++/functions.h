#include <iostream>

using namespace std;

int leftindex(int indexi) {
    // indexi * 2 + 1
    return ((indexi << 1) + 1);
}

int rightindex(int indexi) {
    // indexi * 2 + 2
    return ((indexi << 1) + 2);
}

int parent(int indexi) {
    // floor(indexi - 1) / 2)
    return ((indexi - 1) >> 1);
}

void swapit(int& irx, int& iry) {
    // Swaps the values in the array.
    int itmp = irx;
    irx = iry;
    iry = itmp;
}

void max_heapify(int* A, int parent, int last) {
    cout << "max_heap(A, " << parent << ", " << last << ")" << endl;
    int child = leftindex(parent);
    cout << "\tchild = " << child << endl;
    while (child <= last) {
        if (child < last && A[child] < A[child + 1]) {
            child++;
        }
        if (A[child] > A[parent]) {
            swapit(A[child], A[parent]);
        }
        parent = child;
        child = (2*parent) + 1;
    }
}

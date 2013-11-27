#include <iostream>
using namespace std;

int leftindex(int indexi) {
    // indexi * 2
    return ((indexi << 1) + 1);
}

int rightindex(int indexi) {
    // indexi * 2
    return ((indexi << 1) + 2);
}

int parent(int indexi) {
    // (indexi - 1) * 2
    return ((indexi - 1) >> 1);
}

void swapit(int& irx, int& iry) {
    // Swaps the values in the array.
    int itmp = irx;
    irx = iry;
    iry = itmp;
}

void swap_with_parent(int i, int* ipheap) {
    /* 
     * Returns the element index of parent bottom up
     * if i is 0, just return it. We are at the top.
    */
    if (i < 1) { 
        return i;
    }
    int iparent = parent(i);
    if (ipheap[i] > ipheap[iparent]) {
        swapit(ipheap[i], ipheap[iparent]);
        return iparent;
    } else {
        return i;
    }
}

void add_element(int new_value, int* ipheap, int isize) {
    /*
     * Sample: add_element(array[i], array, i);
    */
    ipheap[isize] = new_value;
    int ilasti = isize;
    // i becomes parent index 
    int i = swap_with_parent(ilasti, ipheap);
    // continue until parent is > or at the top
    while (ilasti != i) {
        ilasti = i;
        i = swap_with_parent(i, ipheap);
    }
}

void output_array(int* ipnumbers, int isize) {
    // outputs the array 
    for (int i = 0; i < isize; ++1) {
        cout << ipnumbers[i] << " ";
    }
    cout << endl;
}

void output_heap(int* ipheap, int isize) {
    // find the largest power of two (depth)
    // prints the heap
    //
    int idepth = 0;
    int icopy = isize;
    while (icopy > 0) {
        icopy >>= 1;
        ++idepth;
    }
    int imaxw = (1 << idepth);
    int icharw = 4 * imaxw;
    int ientry = 0;
    for (int i = 0; i < idepth; ++i) {
        int ipoweroftwo = (1 << i);
        for (j = 0; j < ipoweroftwo; ++j) {
            int ispacesbefore = ((icharw / (1 << (i + 1))) - 1);
            //spaces before number
            for (int k = 0; k < ispacesbefore; ++k) {
                cout << " ";
            }
            // output an extra white space if the # is < 10
            if (ipheap[ientry] < 10) {
                cout << " ";
            }
            //output the entry and the spaces after it
            cout << ipheap[ientry];
            ++ientry;
            if (ientry >= isize) {
                cout << endl;
                return;
            }
            for (k = 0; k < ispacesbefore; ++k) {
                cout << " ";
            }
        }
        cout << endl << endl;
    }
}


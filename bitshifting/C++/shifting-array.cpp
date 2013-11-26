#include <iostream>
using namespace std;

#define N 8

void populate(int* a) {
    for (int i = 0; i < N; i++) {
        a[i] = (i * 10);
    }
}

void print_array(int* a) {
    cout << endl;
    cout << "\t| ";
    for (int i = 0; i < N; i++) {
        cout  << a[i] << " ";
        if (i < N) {
            cout << "| ";
        }
    }
    cout << endl;
    cout << endl;
}

void rshift_linear(int* a, int sb) {
    // sb = shift by
    int s = (N - 1);
    for (int i = s; i >= 0; --i) {
        a[i] = a[i-sb];
        if (i < 1) {
            a[i] = i;
        }
    }
}

void lshift_linear(int* a, int sb) {
    // sb = shift by
    int s = (N - 1);
    for (int i = 0; i <= s; i++) {
        a[i] = a[i + sb];
        if (i == s) {
            a[i] = 0;
        }
    }
}

int main() {
    int arr[N];

    // shift to the right by one.
    cout << "\tSHIFTING RIGHT 3 TIMES..." << endl;
    populate(arr);
    print_array(arr);
    
    rshift_linear(arr, 1);
    print_array(arr);
    
    rshift_linear(arr, 1);
    print_array(arr);
    
    rshift_linear(arr, 1);
    print_array(arr);
    
    cout << endl << "\t-----------" << endl;
    cout << "\tSHITING LEFT 3 TIMES...""" << endl;

    // shift that bitch right back.
    populate(arr);
    print_array(arr);
    
    lshift_linear(arr, 1);
    print_array(arr);
    
    lshift_linear(arr, 1);
    print_array(arr);
    
    lshift_linear(arr, 1);
    print_array(arr);


    return 0;
}









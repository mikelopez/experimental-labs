#include <iostream>
using namespace std;

#define N 10

void fillerup(int* a) {
    for (int i = 0; i < N; i++) {
        a[i] = (i * 10);
    }
}
void printa(int* a) {
    for (int i = 0; i < N; i++) {
        cout << a[i] << " - ";
    }
    cout << endl;
}

int main() {
    int a[N];
    fillerup(a);
    printa(a);
    for (int i = 9; i >= 0; i--) {
        a[i] = a[i-2];
        if (i < 1) {
            a[i] = i;
        }
        cout << "index shift right " << i << " >> 1 = " << (i >> 1) << endl;
        cout << "index shift left " << i << " << 1 = " << (i << 1) << endl;
    }
    printa(a);
    return 0;
}

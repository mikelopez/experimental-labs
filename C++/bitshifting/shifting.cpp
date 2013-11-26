#include <iostream>

using namespace std;

int leftchild(int indexi) {
    // returns the index for left child
    return ((indexi << 1) + 1);
}
int rightchild(int indexi) {
    // returns the index for the right child
    return ((indexi << 1) + 2);
}
int parent(int indexi) {
    if (indexi < 1) {
        return indexi;
    } else {
        return ((indexi - 1) >> 1);
    }
}

int main() {
    int rc, lc, p;
    
    // do 0 - 9
    for (int i = 0; i < 10; i++) {
        lc = leftchild(i);
        rc = rightchild(i);
        p = parent(i);
        cout << "Left child of index: " << i << " is " << lc << endl;
        cout << "Right child of index: " << i << " is " << rc << endl;
        cout << "Parent of index: " << i << " is " << p << endl;
    }

    return 0;

}

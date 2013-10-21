/* Quickly demonstrating pointer types */
#include <iostream>
using namespace std;

int main() {
    int x = 20;
    int y = 20;
    
    int* pointer;
    pointer = &x;
    cout << "x = " << *pointer << endl;
    cout << "addr of x = " << pointer << endl;
    *pointer = (*pointer*2);
    cout << "x(2) is now " << *pointer << endl;
    cout << "x addr is still = " << pointer << endl;
    
    pointer = &y;
    cout << "y = " << *pointer << endl;
    cout << "addr of y = " << pointer << endl;
    *pointer = (*pointer*2);
    cout << "y(2) is now " << *pointer << endl;
    cout << "y addr is still = " << pointer << endl;

    return 0;
}

/* pointer arrays */

#include <iostream>
using namespace std;

int main ()
{
    int numbers[5];

    // takes us to first element
    int * p;
    p = numbers; 
    cout << "addr of numbers array: " << p << endl;

    *p = 10;
    p++;    
    
    *p = 20;
    // specify element number or use first element address
    p = &numbers[2];
    cout << "addr of numbers array elem 2 " << p << endl;
    p = numbers + 2;
    cout << "addr of numbers + 2 " << p << endl;
    
    // third element
    *p = 30;
    p = numbers + 3;    
    
    // ..etc
    *p = 40;
    p = numbers;    
    *(p+4) = 50;
    
    for (int n=0; n<5; n++)
        cout << numbers[n] << ", ";
    return 0;
}

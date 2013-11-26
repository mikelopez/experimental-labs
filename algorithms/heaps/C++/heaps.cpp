#include <iostream>
#include "functions.h";

#define N 15;

int main() {
    using namespace std;
    srand(1);
    
    int numbers[N];
    for (int i = 0; i < N; ++i) {
        numbers[i] = (rand() % 100);
    }
    // out put the heap after each add
    for (int i = 0; i < N; ++i) {
        add_element(numbers[i], numbers, i);
        output_array(numbers, i+1);
        cout << endl;
        output_heap(numbers, i + 1);
        cout << "------------------";

    }
    for int (i = 0; i < N; ++i) {
        remove_root(numbers, N - 1);
        output_array(numbers, (N-1) - i);
        cout << endl;
        output_heap(numbers, (N-1) - i);
        cout << "------------------";

    }
    return 0;
    
}

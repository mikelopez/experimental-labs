#include <iostream>
#include "../../common-src/timeit.h"
using namespace std;

/* Demonstrating a binary search */

const int N = 2048;
const int firsthalf = (N / 2);

void build_array(int *id);
int binary_search(int *id, int *search_for);

int main() {
    int id[N];
    int value;
    int result;
    timer t1, t2;

    build_array(id);
    cout << "Enter a value to search for between " << id[0] << " and ";
    cout << id[(N-1)] << " " << endl;
    cin >> value;
    cout << "Searching..." << endl;

    // perform the binary search
    t1 = run_timer(t1);
    result = binary_search(id, &value);
    t2 = run_timer(t2);
    print_time_diff(t1, t2);
    cout << "Result was " << result << endl;
}


void build_array(int *id) {
    for (int i = 0; i < N; i++) {
        id[i] = (i * 10) + i;
    }
}

int binary_search(int *id, int *search_for) {
    // Binary search algorithm - return the index number
    cout << "exec binary search" << endl;
    int lo = 0;
    int hi = N-1;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (*search_for < id[mid]) {
            hi = mid - 1;
        } else if(*search_for > id[mid]) {
            lo = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}


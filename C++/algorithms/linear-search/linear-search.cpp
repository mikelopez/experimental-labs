/* 
 * Linear Search Timing: O(n)
 * 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 254;
const int firsthalf = ((N+1) / 2);

int build_array(int *id);
int linear_search(int *id, int searchfor);
void print_array(int *id);


int main() {
    // 256 bytes array
    int id[N];
    int search_for;
    int index;

    cout << "Building the array" << endl;
    build_array(id);
    print_array(id);
    cout << "Enter a number to search for" << endl;
    cin >> search_for;
    cout << "You entered " << search_for << endl;
    index = linear_search(id, search_for);
    if (linear_search >= 0) {
        cout << "Found on index " << index << endl;
        cout << "id[" << index << "] = " << id[index];
    } else {
        cout << "Not Found :(" << endl;
    } 
    return 0;
}

int linear_search(int *id, int searchfor) {
    // if found, stop && return the index number
    for (int i = 0; i < N; i++) {
        // cout << "Searching for " << searchfor << endl;
        // cout << "id[i] = " << id[i] << " and index " << i << endl;
        if (id[i] == searchfor) {
            return i;
        } 
    }
    return -1;
}

void print_array(int *id) {
    for (int i = 0; i < N; i++) {
        cout << "id[" << i << "] = " << id[i] << endl;
    }
}

int build_array(int *id) {
    // build the array of [5, 10, 15] etc...
    int rnd = 5;
    int count = 5;

    for (int i = 1; i < N; i++) {
        id[i] = rnd;
        rnd = (rnd + 5);
    }
    cout << "Wrote 254 elements!" << endl;
    return 0;
}

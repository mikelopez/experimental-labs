#include <iostream>
#include "functions.h"

#define N 9

using namespace std;

int main() {
	int numbers[N] = {3, 5, 8, 7, 1, 13, 11, 16, 6};
	int start = N / 2;
	cout << "Starting " << start << endl;
	// build the damn array
	for (int i = start; i >= 0; --i) {
		max_heapify(numbers, i, (N-1));
	}

	for (int i = 0; i < N; i++) {
		cout << numbers[i] << endl;
	}
}
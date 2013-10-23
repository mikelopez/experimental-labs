#include <stdio.h>
#define MAX 81

typedef char value;
typedef value grid[MAX];

void setgrid(grid data) {
    int i;
    for (i = 0; i < MAX; i++) {
        data[i] = ".";
    }
}

void printgrid(grid data) {
    int i;
    for (i = 0; i < MAX; i++) {
        printf("%s", data[i]);
    }
}

int main(int argc, char argv[]) {
    grid grid_data;
    setgrid(grid_data);
    printgrid(grid_data);
    return 0;
}

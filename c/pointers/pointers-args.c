/* Illustrates the use of Pointers as function arguments
 * to swap the value of two variables
*/

#include <stdio.h>
int swap_vars(int *firstnum, int *secondnum) {
    int temp;
    temp = *firstnum;
    *firstnum = *secondnum;
    *secondnum = temp;
    return 0;
}

int main() {
    int a = 10;
    int b = 32;
    printf("Before swap: a = %d, b = %d", a, b);
    swap_vars(&a, &b);
    printf("After swap: a = %d, b = %d", a, b);
    return 0;
}


/* 
 * Illustrating using pointers to functions 
 */

#include <stdio.h>

void fish_sticks(int fs) {
    if (fs > 0) {
        printf("You like fishsticks!");
    } else {
        printf("You don't like fishsticks :(");
    }
}


int main() {
    void (*ptr)(int);
    ptr = &fish_sticks;

    /* Calling fish_sticks() function from ptr */
    ptr(2);

    /* this works too */
    (*ptr)(7);


    return 0;
}

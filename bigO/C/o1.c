/* 
 * Illustrates a sample of an algorithm
 * that will always calculate and execute in the
 * same time regardless of the input
 * Using O(1) Illustration
 */
#include <stdio.h>
#include <stdint.h>
#include <time.h>



int main() {
    clock_t s_start, s_end;
    clock_t s_s_start, s_s_end;
    clock_t l_start, l_end;
    double time_spent;
    double s_time_spent;
    double long_time_spent;
    
    char s_lg[100] = "Longer string here!";
    char ss[4] = "ARSE";

    /* Start timing the smaller string array */
    s_start = clock();
    if (ss[0] == 0) { 
        printf("Found!\n");
    } else {
        printf("Not found\n");
    }
    s_end = clock();
    time_spent = (double)(s_end - s_start) / CLOCKS_PER_SEC;
    printf("Small array took %f\n", (time_spent));


    /* same array to test accuracy */
    s_s_start = clock();
    if (ss[0] == 0) { 
        printf("Found!\n");
    } else {
        printf("Not found\n");
    }
    s_s_end = clock();
    time_spent = (double)(s_s_end - s_s_start) / CLOCKS_PER_SEC;
    printf("(Same) Small array took %f\n", (s_time_spent));


    l_start = clock();
    if (s_lg[0] == 0) { 
        printf("Found!\n");
    } else {
        printf("Not found\n");
    }
    l_end = clock();
    long_time_spent = (double)(l_end - l_start) / CLOCKS_PER_SEC;
    printf("Larger array took %f\n", (long_time_spent));


    return 0;

}

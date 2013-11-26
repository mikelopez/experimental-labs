/*
 * Given N distinct integers figures out how many triples
 * sum to exactly zero
 */

#include <stdio.h>
#include <stdint.h>
#include <time.h>


#define N 8

/* Threesum brute force algorithm */


int count(int *a, int* result) {
    printf("%d", N);
    int c = 0;
    int i, j, k;
    for (i = 0; i < N; i++) {
        printf("\n\ni = %d\n", i);
        for (j = (i+1); j < N; j++) {
            printf("-- j = %d\n", j);
            for (k = (j+1); k < N; k++) {
                printf("---- k =%d\n", k);
                printf("-------- CHECKING-INDEX %d %d %d\n", i, j, k);
                printf("-------- Values: %d, %d, %d\n", a[i], a[j], a[k]);
                if (a[i] + a[j] + a[k] == 0) {
                    printf("-------- FOUND! Increment %d + 1\n", c);
                    c++;
                }
            }
        }
    }
    *result = c;
    return c;
    
}


int main() { 
    clock_t s_start, s_end;
    clock_t s_s_start, s_s_end;
    clock_t l_start, l_end;
    double time_spent;
    double s_time_spent;
    double long_time_spent;

    int result;
    int a[N];
    int i = 0;
    int num;
    FILE *fr;
    fr = fopen("../8ints.txt", "r");
    while (fscanf(fr, "%d", &num) > 0) {
        //printf("%d\n", num);
        a[i] = num;
        i++;
    }
    fclose(fr);
    printf("\n\nStarting now!\n\n");
    s_start = clock();
    count(a, &result);
    s_end = clock();
    time_spent = (double)(s_end - s_start) / CLOCKS_PER_SEC;
    printf("\nFinished with result: %d in %f sec\n", result, time_spent);
    return 0;
}

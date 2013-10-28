#include <stdio>
#include <stdint.h>
#include <time.h>

int main() {
    clock_t s_start, s_end;
    clock_t s_s_start, s_s_end;
    clock_t l_start, l_end;
    double time_spent;
    double s_time_spent;
    double long_time_spent;
    s_start = clock();

    // the code
    

    s_end = clock();
    time_spent = (double)(s_end - s_start) / CLOCKS_PER_SEC;
    return 0;
}


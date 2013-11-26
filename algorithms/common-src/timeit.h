/* Custom header file for common 
 * timing functions to record how 
 * long a process took to execute 
 * ---
 * dev@scidentify.info
 */

#ifndef MYHEADER_H_INCLUDED

#include <iostream>
#include <time.h>

typedef clock_t timer;

#define MYHEADER_H_INCLUDED

timer run_timer(timer t1);
void print_time_diff(timer t1, timer t2);

timer run_timer(timer t1) {
    t1 = clock();
    return t1;
}

void print_time_diff(timer t1, timer t2) {
    float diff = ((float)t2-(float)t1);
    std::cout << "\nTook " << diff << " ms " << std::endl;
}

#endif



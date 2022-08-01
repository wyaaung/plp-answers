#include <sys/time.h>  // needed for gettimeofday
#include <unistd.h> // needed for sleep
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    // exit if wrong number of arguments are given
    if (argc > 2) return -1;

    // declare start, stop and elapsed as type 'struct timeval'
    struct timeval start, stop, elapsed;

    // take commandline argument (number of seconds to sleep)
    int n = atoi(argv[1]);

    // record time before sleeping
    gettimeofday(&start, NULL);
    // sleep for n seconds
    sleep(n);
    // record time immediately after sleeping
    gettimeofday(&stop, NULL);

    // calculate elapsed time by subtracting start from stop
    timersub(&stop, &start, &elapsed);

    // print out seconds elapsed, to 6 d.p.
    printf("sleep duration: %lu.%06lu seconds\n", elapsed.tv_sec,
            elapsed.tv_usec);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week3-c-pointers-stdlib/07-time

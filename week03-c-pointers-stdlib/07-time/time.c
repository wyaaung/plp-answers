#include <sys/time.h>  // needed for gettimeofday
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if (argc > 2) return -1;

    struct timeval tv, start, stop, elapsed;

    int n = atoi(argv[1]);

    gettimeofday(&start, NULL);
    sleep(n);
    gettimeofday(&stop, NULL);

    timersub(&stop, &start, &elapsed);

    printf("sleep duration: %lu.%06lu seconds", elapsed.tv_sec,
            elapsed.tv_usec);

    return 0;
}
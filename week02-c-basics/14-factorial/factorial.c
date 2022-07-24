#include <stdio.h>
#include <stdlib.h>

long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(int argc, char **argv){
    int a = atoi(argv[1]);
    long fact = factorial(a);
    printf("%d! = %ld\n", a, fact);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int a = atoi(argv[1]);

    int ptr = &a;

    printf("Variable contains %d and is located %p\n", a, ptr);

    return 0;
}
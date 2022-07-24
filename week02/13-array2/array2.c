#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int array[10];

    // catch any arguments out of range
    if (argc > 11) {
        printf("Too many arguments!");
        return 0;
    }

    for (int i = 0; i < argc - 1; i++) {
        array[i] = atoi(argv[i + 1]);
    }

    for (int i = 0; i < argc - 1; i++) {
        if (array[i] % 2 == 0){
            printf("%d is even\n", array[i]);
        }else {
            printf("%d is odd\n", array[i]);
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
    // convert a single commandline argument to integer
    if (argc != 2){
        printf("Please provide one argument");
        return -1;
    }
    int n = atoi(argv[1]);

    // allocate memory to array that holds n integers
    int *array_1 = malloc(n * sizeof(int));
    if (!array_1){
        printf("Error allocating array one");
        return -1;
    }

    // fill array_1 with random numbers between 0 and 100
    for(int i = 0; i < n; ++i) {
        array_1[i] = rand()%101;
    }

    // allocate memory to second integer of same size
    int *array_2 = malloc(n * sizeof(int));
    if (!array_2){
        printf("Error allocating array two");
        return -1;
    }

    // copy n * sizeof(int) bytes from array_1 to array_2
    // thus copying the entirity of array_1 to array_2
    memcpy(array_2, array_1, n * sizeof(int));

    // print array_1 accordingly to format in a single line
    printf("array1: ");
    for (int i = 0; i < n; ++i){
        printf("%d ", array_1[i]);
    }
    printf("\n");

    // print array_2 accordingly to format in a single line
    printf("array2: ");
    for (int i = 0; i < n; ++i){
        printf("%d ", array_2[i]);
    }
    printf("\n");

    // free both allocated memories before exiting
    free(array_2);
    free(array_1);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/14-memcpy

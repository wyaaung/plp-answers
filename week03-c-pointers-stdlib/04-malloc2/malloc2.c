#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    // initialize 2d array
    int **array;

    // check that only two commandline arguments are passed
    if (argc != 3) return -1;

    // store each argument in variables
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    // allocate memory for the outermost layer of the 2d array
    // each array is stored as the address of the start point of the array
    // so 'int *'' actually has a fixed size that we can allocate
    array = malloc( x * sizeof(int *));

    // exit program if malloc failed
    if (!array) return -1;

    // for each 1d array in 2d array, allocate correct size of memory
    for (int i = 0; i < x; ++i){
        array[i] = malloc(y * sizeof(int));
        // exit program if malloc failed
        if (!array[i]) return -1;
    }

    // a variable that counts from 0 to x * y - 1
    int incrementor = 0;

    // allocate the numbers 0 to x * y - 1 in 2d array, in order
    for(int i = 0; i < x; ++i) {
        for(int j = 0; j < y; ++j) {
            array[i][j] = incrementor;
            incrementor++;
        }
    }

    // print elements in array, each 1d array taking one line
    for(int i = 0; i < x; ++i) {
        for(int j = 0; j < y; ++j) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // free the allocated memory for each of the 1d arrays
    // we do this before deallocating memory for 2d array
    // because we can't access the 1d arrays once we free the 2d array
    for (int i =0; i < x; ++i){
        free(array[i]);
    }

    // free the allocated memory for 2d array
    free(array);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/04-malloc2

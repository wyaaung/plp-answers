#include <stdio.h>
#include <stdlib.h>

// callback function for use of qsort()
// this is passed as an argument when calling qsort()
// a and b are pointers that presumably point to integer values
// function returns the value of A - B, where A and B are values pointed by a and b
int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(int argc, char **argv) {
    // declare empty integer array
    // size is the number of commandline arguments
    int *array;
    int size = argc - 1;

    // use malloc to allocate the correct amount of memory to the array
    // we pass the number of bytes to allocate for malloc() as parameter
    array = malloc(size * sizeof(int));

    // check if malloc worked. If not, exit with exit code of -1
    // malloc will return NULL when failed
    if(!array) return -1;

    // treat array like a regular array
    for(int i = 0; i < size; ++i) {
        array[i] = atoi(argv[i + 1]);
    }

    // sort array using qsort()
    qsort(array, size, sizeof(int), compare);

    // print each element of array in a single line, with a space in between
    for(int i = 0; i<size; ++i) {
        printf("%d ", array[i]);
    }
    // print a newline character at the end of the line
    printf("\n");

    // free the allocated memory to avoid memory leaks
    free(array);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week3-c-pointers-stdlib/03-malloc

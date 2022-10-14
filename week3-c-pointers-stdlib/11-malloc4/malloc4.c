#include <stdlib.h>
#include <stdio.h>

// define constant SIZE as 10
#define SIZE 10

int main(int argc, char **argv){
    // allocate memory for array (10 integers)
    int *array = malloc(SIZE * sizeof(int));
    if (!array){
        printf("Error allocating array");
        return -1;
    }
    // assign 0~9 to each elemnt of array
    for(int i = 0; i < SIZE; i++) {
        array[i] = i;
    }
    // print each element in array, each in its own line
    for(int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }
    // free the allocated memory space for the array
    free(array);
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/11-malloc4

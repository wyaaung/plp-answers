#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *my_realloc(void *ptr, size_t old_size, size_t new_size) {
    // create a new pointer (array), allocate memory with given size
    void *new_ptr;
    new_ptr = malloc(new_size);
    if (!new_ptr) return NULL;

    /* memcpy() copies memory contents from one memory space to another
     * the three parameters for this function are:
     * the destination address, the source address, and the number of bytes to copy. */

    // if ptr is not NULL, and presumably contains items
    if(ptr) {
        // if we need to cut down the size of the buffer
        if(new_size < old_size) {
            // only copy up to the smaller buffer size (new buffer)
            memcpy(new_ptr, ptr, new_size);
        }
        // if we don't need to cut down the size of the buffer
        else {
            // copy the entire contents of the old buffer to the new buffer
            // as everything will fit into the new buffer
            memcpy(new_ptr, ptr, old_size);
        }
    }
    // if ptr is NULL, there are no things to copy to new_ptr
    // free the memory allocated to ptr, as it has been successfully reallocated
    free(ptr);

    return new_ptr;
}

int main(int argc, char **argv) {
    /* first malloc space for 5 int */
    int *array = malloc(5 * sizeof(int));
    if(!array) return -1;

    for(int i=0; i<5; i++) {
        array[i] = i*10;
        printf("before realloc, array[%d] = %d\n", i, array[i]);
    }

    /* expand the size to 10 int */
    array = my_realloc(array, 5*sizeof(int), 10*sizeof(int));
    if(!array) return -1;

    for(int i=5; i<10; i++)
        array[i] = i*10;

    for(int i=0; i<10; i++)
        printf("after realloc, array[%d] = %d\n", i, array[i]);

    free(array);
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/12-malloc5

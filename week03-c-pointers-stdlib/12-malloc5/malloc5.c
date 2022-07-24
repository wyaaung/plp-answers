#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *my_realloc(void *ptr, size_t old_size, size_t new_size) {
    /* complete here */
    void *new_ptr;

    if (!ptr) {
        new_ptr = malloc(new_size);
        if (!new_ptr) return NULL;
    }else{
        if (old_size < new_size){
            new_ptr = malloc(new_size);
            if (!new_ptr) return NULL;

            // This function takes three arguments:
            // the destination addres, the source address, and the number of bytes to copy.
            memcpy(new_ptr, ptr, old_size);

            free(ptr);
        }else{
            new_ptr = ptr;
        }
    }

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
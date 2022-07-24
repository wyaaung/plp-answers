#include <stdio.h>
#include <stdlib.h>

int compare( const void* a, const void* b)
{
   int int_a = * ( (int*) a );
   int int_b = * ( (int*) b );

   // an easy expression for comparing
   return (int_a > int_b) - (int_a < int_b);
}

int main(int argc, char **argv) {
    int *array;

    int size = argc - 1;

    array = malloc(size * sizeof(int));

    for(int i = 0; i < size; ++i) {
        array[i] = atoi(argv[i + 1]);
    }
    
    if(!array) return -1;
    
    qsort(array, size, sizeof(int), compare);
    
    for(int i = 0; i<size; ++i) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    
    free(array);
}
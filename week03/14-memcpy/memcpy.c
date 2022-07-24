#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
    if (argc > 2){
        printf("Error");
        return -1;
    }

    int size = atoi(argv[1]);

    int *array_1 = malloc(size * sizeof(int));

    if (!array_1){
        printf("Error allocating array one");
        return -1;
    }

    for(int i = 0; i < size; ++i) {
        array_1[i] = rand()%100;
    }

    int *array_2 = malloc(size * sizeof(int));
    
    if (!array_2){
        printf("Error allocating array two");
        return -1;
    }

    memcpy(array_2, array_1, size * sizeof(int));

    printf("array1: ");
    for (int i = 0; i < size; ++i){
        printf("%d ", array_1[i]);
    }

    printf("\n");

    printf("array2: ");
    for (int i = 0; i < size; ++i){
        printf("%d ", array_2[i]);
    }

    printf("\n");

    free(array_2);
    free(array_1);

    return 0;
}
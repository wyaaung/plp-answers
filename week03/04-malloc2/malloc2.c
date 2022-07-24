#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int **array;

    if (argc != 3) return -1;

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    array = malloc( x * sizeof(int *));

    if (!array) return -1;

    for (int i = 0; i < x; ++i){
        array[i] = malloc(y * sizeof(int));
        if (!array[i]) return -1;
    }

    int incrementor = 0;

    for(int i = 0; i < x; ++i) {
        for(int j = 0; j < y; ++j) {
            array[i][j] = incrementor;
            incrementor++;
        }
    }


    for(int i = 0; i < x; ++i) {
        for(int j = 0; j < y; ++j) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    for (int i =0; i < x; ++i){
        free(array[i]);
    }

    free(array);

    return 0;
}
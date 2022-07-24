#include <stdio.h>
#include <stdlib.h>

// Callback function for use of qsort()
int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(int argc, char **argv) {
    int array[10];

    // catch any arguments out of range
    if (argc > 11) {
        printf("Too many arguments!");
        return 0;
    }

    for (int i = 0; i < argc - 1; ++i) {
        array[i] = atoi(argv[i + 1]);
    }

    // Perform qsort() on array
    qsort(array, argc - 1, sizeof(int), compare);
    
    // Print array
    for (int i = 0; i < argc - 1; ++i) {
        printf("%d ", array[i]);
    }
}
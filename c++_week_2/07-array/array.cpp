#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm> // for min and max

#define SIZE1 100
#define SIZE2 154

void add_arrays(
        int *array1, int *array2, int *result_array,
        int size1, int size2)
{
    int max_size = std::max(size1, size2);

    for (int i = 0; i < max_size; ++i) {
        if (i < size1)
            result_array[i] = array1[i];

        if (i < size2)
            result_array[i] += array2[i];
    }
}

void init_array(int *array, int size) {
    for (int i = 0; i < size; ++i)
        array[i] = i;
}

int main(int argc, char **argv) {

    int array1[SIZE1];
    int array2[SIZE2];

    init_array(array1, SIZE1);
    init_array(array2, SIZE2);

    int result_size = std::max(SIZE1, SIZE2);
    int result_array[result_size];

    for (int i = 0; i < result_size; ++i)
        result_array[i] = 0;

    add_arrays(array1, array2, result_array, SIZE1, SIZE2);

    for (int i = 0; i < result_size; ++i)
        std::cout << result_array[i] << " ";
    std::cout << "\n";

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/07-array

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm> // for min and max

#define SIZE1 100
#define SIZE2 154

template<std::size_t SIZE>
void add_arrays(
        std::array<int, SIZE1> &array1, std::array<int, SIZE2> &array2, std::array<int, SIZE> &result_array,
        int result_size)
{
    for (int i = 0; i < result_size; ++i) {
        if (i < array1.size())
            result_array[i] = array1[i];

        if (i < array2.size())
            result_array[i] += array2[i];
    }
}

template<std::size_t SIZE>
void init_array(std::array<int, SIZE> &array, int size) {
    for (int i = 0; i < size; ++i)
        array[i] = i;
}

int main(int argc, char **argv) {

    std::array<int, SIZE1> array1;
    std::array<int, SIZE2> array2;

    init_array(array1, SIZE1);
    init_array(array2, SIZE2);

    const std::size_t result_size = std::max(SIZE1, SIZE2);
    std::array<int, result_size> result_array;

    for (int i = 0; i < result_size; ++i)
        result_array[i] = 0;

    add_arrays(array1, array2, result_array, result_size);

    for (int i = 0; i < result_size; ++i)
        std::cout << result_array[i] << " ";
    std::cout << "\n";

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/07-array

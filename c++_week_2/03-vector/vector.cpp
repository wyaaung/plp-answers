#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm> // for min and max

void add_arrays(
        std::vector<int> &array1, std::vector<int> &array2, std::vector<int> &result_array,
        int result_size)
{
    for (int i = 0; i < result_size; ++i) {
        if (i < array1.size())
            result_array.push_back(array1[i]);

        if (i < array2.size())
            result_array[i] += array2[i];
    }
}

void init_array(std::vector<int> &array, int size) {
    for(int i=0; i<size; ++i)
        array.push_back(i);
}

int main(int argc, char **argv) {
    int size1, size2, result_size;
    std::vector<int> array1, array2, result_array;

    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <size array 1> <size array 2>\n";
        return -1;
    }

    size1 = atoi(argv[1]);
    size2 = atoi(argv[2]);
    result_size = std::max(size1, size2);

    init_array(array1, size1);
    init_array(array2, size2);

    add_arrays(array1, array2, result_array, result_size);

    for (int i = 0; i < result_size; ++i)
        std::cout << result_array[i] << " ";
    std::cout << "\n";

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/03-vector

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm> // for max

using namespace std; // for max

void multiply_arrays(vector<int> &array1, vector<int> &array2, vector<int> &result_array) {
    int i;

    for(i=0; i<array1.size(); i++) {
        if(i >= array2.size())
            result_array.push_back(array1[i]);
        else
            result_array.push_back(array1[i] + array2[i]);
    }

    for(; i<array2.size(); i++)
        result_array.push_back(array2[i]);

}

void init_array(vector<int> &array, int size) {
    for(int i=0; i<size; i++)
        array.push_back(i);
}

int main(int argc, char **argv) {
    int size1, size2, result_size;
    vector<int> array1, array2, result_array;

    if(argc != 3) {
        printf("usage: %s <size array 1> <size array 2>\n", argv[0]);
        return -1;
    }

    size1 = atoi(argv[1]);
    size2 = atoi(argv[2]);
    result_size = max(size1, size2);

    init_array(array1, size1);
    init_array(array2, size2);

    multiply_arrays(array1, array2, result_array);

    for(int i=0; i<result_size; i++)
        printf("%d ", result_array[i]);
    printf("\n");

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2021-2022/week4-c++/04-vector
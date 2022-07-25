#include <stdio.h>
#include <stdlib.h>

// callback function for use of qsort()
// this is passed as an argument when calling qsort()
// a and b are pointers that presumably point to integer values
// function returns the value of A - B, where A and B are values pointed by a and b
int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(int argc, char **argv) {
    // argc counts the number of arguments, including the name of the program
    // so if we type 10 integers as arguments, argc would be 11
    // check if there are more than 10 integers entered
    // print error and exit if that is the case
    if (argc > 11) {
        printf("Too many arguments!");
        return -1;
    }
    // declare the array we will store the arguments in
    // the array will store only the number of arguments
    // so we declare the size as argc - 1 (we exclude the program name)
    int array[argc - 1];

    // we convert each argument into integer, and insert them into the array
    for (int i = 0; i < argc - 1; i++) {
        // we use argv[i+1] since argv[0] is just the program name
        array[i] = atoi(argv[i + 1]);
    }

    // perform qsort() on array
    // see below link for details
    // https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
    qsort(array, argc - 1, sizeof(int), compare);

    // print each item in array, inserting a space between each item
    // these are all printed in the same line
    for (int i = 0; i < argc - 1; i++) {
        printf("%d ", array[i]);
    }
    // print end of line character at the end
    // try and see what happens if you remove this line!
    printf("\n");
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week2-c-basics/09-array

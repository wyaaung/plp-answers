#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    // if too many arguments are provided, print error and exit
    if (argc > 11) {
        printf("Too many arguments! Please provide up to 10");
        return -1;
    }

    // declare array size accordingly to number of arguments
    int array[argc - 1];

    // insert each argument into array, by converting each to integer
    for (int i = 0; i < argc - 1; i++) {
        array[i] = atoi(argv[i + 1]);
    }

    // for each item in array, print if item is even or odd
    for (int i = 0; i < argc - 1; i++) {
        if (array[i] % 2 == 0){
            printf("%d is even\n", array[i]);
        }else {
            printf("%d is odd\n", array[i]);
        }
    }

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/13-array2

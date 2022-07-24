#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    // we really should check for invalid arguments
    // but this is omitted for the sake of focusing on the intended exercise
    int n = atoi(argv[1]);

    // if n is even, increment it by 1 to make it odd
    if (n % 2 == 0){
        n++;
    }

    // print the top half of the triangle, including the middle
    // row goes from 1 to n
    for (int row = 1; row <= n; ++row){
        for (int col = 1; col <= row; ++col){
            printf("*");
        }
        printf("\n");
    }

    // print the bottom half of the triangle, excluding the middle
    // row goes from n-1 to 1
    for (int row = n - 1; row >= 1; --row){
        for (int col = 1; col <= row; ++col){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week2-c-basics/16-triangle2

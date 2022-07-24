#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    // we really should check for invalid arguments
    // but this is omitted for the sake of focusing on the intended exercise
    int no_of_rows = atoi(argv[1]);

    // for each row
    for (int row = 1; row <= no_of_rows; ++row){
        // print * time current row number (1~no_of_rows)
        for (int col = 1; col <= row; ++col){
            printf("*");
        }
        // print newline character at end of row
        printf("\n");
    }

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week2-c-basics/15-triangle

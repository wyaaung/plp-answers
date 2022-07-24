#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int no_of_rows = atoi(argv[1]);

    if (no_of_rows % 2 == 0){
        no_of_rows++;
    }

    no_of_rows = (no_of_rows / 2) + 1;

    for (int row = 1; row <= no_of_rows; ++row){
        for (int col = 1; col <= row; ++col){
            printf("*");
        }
        printf("\n");
    }

    for (int row = no_of_rows - 1; row >= 1; --row){
        for (int col = 1; col <= row; ++col){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
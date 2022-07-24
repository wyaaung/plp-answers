#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int no_of_rows = atoi(argv[1]);

    for (int row = 1; row <= no_of_rows; ++row){
        for (int col = 1; col <= row; ++col){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
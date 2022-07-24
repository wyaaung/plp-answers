#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main(int argc, char **argv){
    char *string_one;
    char *string_two;

    printf("input string1:");
    string_one = malloc(MAX_SIZE);
    fgets( string_one, MAX_SIZE, stdin); //read from stdin
    
    printf("input string2:");
    string_two = malloc(MAX_SIZE);
    fgets( string_two, MAX_SIZE, stdin); //read from stdin

    if (!strcmp(string_one, string_two)){
        printf("strings are similar");
    }else {
        printf("strings are different");
    }

    free(string_one);
    free(string_two);

    return 0;
}
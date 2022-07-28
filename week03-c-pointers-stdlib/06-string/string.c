#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this defines a constant MAX_SIZE as 100
#define MAX_SIZE 100

int main(int argc, char **argv){
    char *string_one;
    char *string_two;

    printf("input string1:\n");
    // remember that string is treated as an array of chars, and needs memory allocation
    // also, a char takes up 1 byte, so no need to multiply sizeof(char)
    string_one = malloc(MAX_SIZE);
    if (!string_one) return -1;
    fgets( string_one, MAX_SIZE, stdin); //read from stdin

    printf("input string2:\n");
    string_two = malloc(MAX_SIZE);
    if (!string_one) return -1;
    fgets( string_two, MAX_SIZE, stdin); //read from stdin

    // strcmp returns zero only when two strings are similar (like comparing integers)
    if (!strcmp(string_one, string_two)){
        printf("strings are similar\n");
    }else {
        printf("strings are different\n");
    }

    // make sure to free the memory allocated for these strings
    free(string_one);
    free(string_two);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/06-string

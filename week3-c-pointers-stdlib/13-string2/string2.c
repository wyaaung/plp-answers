#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// define constant MAX_SIZE as 300
#define MAX_SIZE 300

int main(int argc, char **argv){
    // declare string and allocate memory to it
    char *string;
    string = malloc(MAX_SIZE);
    // print input prompt and store input to string variable
    printf("input a string:\n");
    fgets(string, MAX_SIZE, stdin);

    // replace the first letter of string with capital letter
    // toupper() returns the uppercase version of given character
    string[0] = toupper(string[0]);
    // iterate through each character until end of string
    for(int i = 0; string[i] != '\0'; i++){
        // if a space is found, capitalize the character right after the space
        if (string[i] == ' '){
            string[i+1] = toupper(string[i+1]);
        }
    }
    // print out the resulting string
    printf("%s", string);
    // free the allocated memory to the string before exiting
    free(string);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/13-string2

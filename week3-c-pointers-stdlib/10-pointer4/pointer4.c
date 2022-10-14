// below comments highlight the changed parts of code
#include <stdio.h>

int main(int argc, char **argv) {
    char *string = "hello, world!\n";
    // we treat the char * variable as a single character
    while (*string != '\0'){
        printf("%c", *string);
        // increnting the value of char * var directly
        // moves the pointer to the next character in the string
        string++;
    }

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/10-pointer4

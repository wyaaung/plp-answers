// Below comments highlight the fixed parts of the code
#include <stdio.h>

int main(int argc, char **argv) {
    // The array contains 9 items, so the array size should be 9 not 8.
    char string[9];

    string[0] = 'h';
    string[1] = 'i';
    string[2] = ' ';
    string[3] = 't';
    string[4] = 'h';
    string[5] = 'e';
    string[6] = 'r';
    string[7] = 'e';
    // the \n character is already included in the below printf
    // so we remove \n from the char array
    // we insert the string termination character \0 instead
    string[8] = '\0';

    printf("%s\n", string);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week2-c-basics/06-string

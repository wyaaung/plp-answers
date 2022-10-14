#include <stdio.h>

char *alphabet = "abcdefghijklmnopqrstuvwxyz";

char capitalize(char c) {
    int a = c - 32;
    return (char) a;
}

int main(int argc, char **argv) {
    for(int i=0; i<26; i++)
        printf("capital %c: %c\n", alphabet[i], capitalize(alphabet[i]));

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week5-compilation/07-ascii

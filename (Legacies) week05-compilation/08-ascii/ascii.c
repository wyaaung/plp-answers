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
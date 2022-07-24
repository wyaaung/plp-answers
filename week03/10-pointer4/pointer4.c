#include <stdio.h>

int main(int argc, char **argv) {
    char *string = "hello, world!\n";

    while (*string != '\0'){
        printf("%c", *string);
        ++string;
    }

    return 0;
}
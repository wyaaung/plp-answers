#include <stdio.h>
#include <stdlib.h>
// required for strlen
#include <string.h>
// required for errno returned from strtol
#include <errno.h>

int get_string(char *buf, int size) {
    char *ret;

    printf("please enter an integer number (base 10): ");
    ret = fgets(buf, 128, stdin);
    if(ret == NULL) {
        perror("fgets");
        return -1;
    }

    // remove the end of line character
    for(int i=0; i<strlen(buf); i++)
        if(buf[i] == '\n') {
            buf[i] = '\0';
            break;
        }

    return 0;
}
int convert_and_print(char *buf) {
    char *endptr;
    int result = strtol(buf, &endptr, 10);

    if(*endptr != '\0') {
        printf("invalid string\n");
    }
    else if(errno == ERANGE) {
        printf("under/overflow\n");
    }
    else {
        printf("you have entered: %d\n", result);
    }

    return 0;
}

int main(int argc, char **argv) {
    char buf[128];

    if(get_string(buf, 128))
        return -1;

    if(convert_and_print(buf))
        return -1;

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/16-strtol

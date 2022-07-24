#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 300

int main(int argc, char **argv){
    char *string;

    printf("input a string:");
    string = malloc(MAX_SIZE);
    fgets(string, MAX_SIZE, stdin);

    for(int i = 0; string[i] != '\0'; ++i){
        if (i == 0){
            string[i] = toupper(string[i]);
        }

        if (string[i] == ' '){
            ++i;

            string[i] = toupper(string[i]);
            continue;
        }
    }

    printf("%s", string);

    free(string);

    return 0;
}
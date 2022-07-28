// below comments highlight the changed parts of code
#include <stdio.h>
#include <stdlib.h>

// function takes pointers to int values as argument
int add(int *a, int *b){
    // add the values pointed by each pointers
    return *a + *b;
}

int main(int argc, char **argv){
    if(argc == 3){
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        printf("%d + %d = %d\n", a, b, add(&a, &b));
    }
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/01-pointer

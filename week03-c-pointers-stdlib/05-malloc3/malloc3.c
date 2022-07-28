// below comments highlight the changed parts of code
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int *a = malloc(10 * sizeof(int));
    if (!a) return -1;

    for (int i = 0; i < 10; ++i){
        a[i] = i * 2;
    }

    int *b = a;

    for (int i = 0; i < 10; ++i){
        printf("%d ", b[i]);
    }
    printf("\n");

    // we have to deallocate the memory allocated by malloc()
    free(a);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/05-malloc3

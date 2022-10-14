#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    // convert argument to int
    int a = atoi(argv[1]);
    // &a returns the address of the variable
    // the %p format specifier prefixes the address with '0x'
    printf("Variable contains %d and is located @%p\n", a, &a);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/09-pointer3

// Below comments highlight the fixed parts of the code
// package name fixed from tdio -> stdio
#include <stdio.h>

// function name should be main, not man
// function type should be int, not void
// technically speaking, the function type can still be void
// but given the 'return 0' line inside the function,
// the function type should presumably be int
// or the 'return 0' statement should be removed entirely
int main() {
    printf("This should work!\n");
    // function should be return, not retur
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/02-compilation-errors

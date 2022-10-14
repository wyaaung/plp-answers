#include <stdio.h>
#include "module1.h"
#include "module2.h"

int main(int argc, char **argv) {
    printf("Hello, this is main\n");
    f1();
    f2();
    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week5-compilation/04-makefile
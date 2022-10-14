#include "module1.h"
#include "module2.h"
#include "module3.h"

int main(int argc, char **argv) {
    module3_enum e = CASE2;

    int res1 = module1_function1(42);
    double res2 = module1_function2(0);
    unsigned long long int res3 = module2_function1();
    module3_function1(e);

    printf("res1: %d\n", res1);
    printf("res2: %lf\n", res2);
    printf("res3: %llu\n", res3);
    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week5-compilation/03-module
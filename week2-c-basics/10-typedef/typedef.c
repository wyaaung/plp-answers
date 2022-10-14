// Below comments highlight the changed parts of the code
#include <stdio.h>
#include <stdlib.h>

// this line typedef's 'unsigned long long int' to 'ull'
typedef unsigned long long int ull;

struct s_rectangle {
    ull width;
    ull length;
};

// this line typedef's 'struct s_rectangle' to 'rectangle'
typedef struct s_rectangle rectangle;

void print_rectangle(rectangle r) {
    printf("Rectangle is %llu x %llu\n", r.width, r.length);
}

int main(int argc, char **argv) {
    // we can replace the original types with new typedef'd aliases
    rectangle r;
    ull width;
    ull length;

    if(argc == 3) {
        width = atoll(argv[1]);
        length = atoll(argv[2]);

        r.width = width;
        r.length = length;

        print_rectangle(r);
    }

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/10-typedef

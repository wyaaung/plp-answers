#include <stdio.h>

/* each flag looks like below when converted to 4-bit binary
 * FLAG1 = 0001
 * FLAG2 = 0010
 * FLAG3 = 0100
 * FLAG4 = 1000 */
typedef enum {
    FLAG1 = 1,
    FLAG2 = 2,
    FLAG3 = 4,
    FLAG4 = 8
    // can also use 1 << 0, 1 << 1, 1 << 2, 1 << 3 instead of 1, 2, 4, 8
} flags;

// performs bitwise AND to each flags with given set of flags
// prints out enabled flags
void print_flags(flags f) {
    // this sees 'f' and each flag as binary values
    // and applies bitwise AND to each bits
    // if f = 0011 and FLAG1 = 0001, f & FLAG1 would be 0001
    // since f & FLAG1 is non-zero, it is interpreted as 'true'
    if(f & FLAG1)
        printf("FLAG1 enabled\n");
    // if f = 1001 and FLAG2 = 0010, f & FLAG2 would be 0000
    // since f & FLAG2 is zero, it is interpreted as 'false'
    if(f & FLAG2)
        printf("FLAG2 enabled\n");
    if(f & FLAG3)
        printf("FLAG3 enabled\n");
    if(f & FLAG4)
        printf("FLAG4 enabled\n");
}

int main(int argc, char **argv) {
    // this performs bitwise OR to provided flags
    // FLAG1 | FLAG2 would be 0001 | 0010, resulting in 0011
    flags f1 = FLAG1 | FLAG2;
    // FLAG1 | FLAG2 | FLAG3 would be 0001 | 0010 | 0100, resulting in 0111
    flags f2 = FLAG1 | FLAG2 | FLAG3;

    printf("f1:\n");
    print_flags(f1);

    printf("f2:\n");
    print_flags(f2);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/17-enum2

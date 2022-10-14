// below comments highlight the changed parts of code
#include <stdio.h>

/* Typedef struct forward declaration for the pointer member */
typedef struct s_list_member list_member;

typedef struct s_list_member {
    int value;
    list_member *next;
} list_member;

int main(int argc, char **argv){
    list_member lm1, lm2, lm3;

    lm1.value = 1; lm1.next = &lm2;
    lm2.value = 2; lm2.next = &lm3;
    lm3.value = 3; lm3.next = 0x0;

    // lm3.value can also be called as lm1.next->next->value
    printf("third member value is: %d\n", lm1.next->next->value);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week3-c-pointers-stdlib/02-pointer2

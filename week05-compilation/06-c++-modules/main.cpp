#include <stdio.h>
#include "Pair.h"
#include "Trio.h"

#define PAIR_MEMBER1   42
#define PAIR_MEMBER2   100

#define TRIO_MEMBER1    10
#define TRIO_MEMBER2    20
#define TRIO_MEMBER3    30

int main(int argc, char **argv) {
    Pair p(PAIR_MEMBER1, PAIR_MEMBER2);
    Trio t(TRIO_MEMBER1, TRIO_MEMBER2, TRIO_MEMBER3);

    printf("multiply %d and %d: %d\n", PAIR_MEMBER1, PAIR_MEMBER2,
            p.multiply());
    printf("add %d and %d: %d\n", PAIR_MEMBER1, PAIR_MEMBER2, p.add());
    printf("multiply %d, %d and %d: %d\n", TRIO_MEMBER1, TRIO_MEMBER2,
            TRIO_MEMBER3, t.multiply());
    printf("add %d, %d and %d: %d\n", TRIO_MEMBER1, TRIO_MEMBER2,
            TRIO_MEMBER3, t.add());
}
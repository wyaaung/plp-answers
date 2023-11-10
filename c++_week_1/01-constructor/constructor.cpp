#include <stdio.h>

class Pair{
    public:
        int x;
        int y;
        Pair(int x, int y){
            this->x = x;
            this->y = y;
        }
};

int main(int argc, char **argv){
    Pair p(10, 20);

    printf("p.x is %d, p.y is %d\n", p.x, p.y);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W1-Classes/01-constructor
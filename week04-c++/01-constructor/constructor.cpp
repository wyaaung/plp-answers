#include <stdio.h>

class Pair{
    public:
        int x;
        int y;
        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }
};

int main(int argc, char **argv){
    Pair p(10, 20);

    printf("p.x is %d, p.y is %d\n", p.x, p.y);

    return 0;
}
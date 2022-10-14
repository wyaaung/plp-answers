#include "Pair.h"

class Trio : public Pair {
    private:
        int _z;

    public:
        Trio(int x, int y, int z);
        int multiply();
        int add();
};
#include <stdio.h>

class Base {
    private:
        int x;
        int y;

    protected:
        void base_method();

    public:
        Base(int x, int y);
};

class Derived : public Base {
    private:
        int z;
    public:
        Derived(int x, int y, int z);
        void derived_method();
};

Base::Base(int x, int y) {
    this->x = x;
    this->y = y;
}

void Base::base_method() {
    printf("base_method called, x: %d, y: %d\n", x, y);
}

Derived::Derived(int x, int y, int z) : Base(x, y), z{z} {};

void Derived::derived_method() {
    printf("derived method called, z: %d. Now calling base_method\n", z);
    base_method();
}

int main(int argc, char **argv) {
    Derived d(3, 4, 5);
    d.derived_method();

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W1-Classes/07-inheritance2

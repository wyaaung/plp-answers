#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Vehicle {
    public:
        virtual int get_number_of_wheels() = 0;
};

class Car : public Vehicle {
    public:
        int get_number_of_wheels(){
            return 4;
        }
};

class Bike : public Vehicle {
    public:
        int get_number_of_wheels(){
            return 2;
        }
};

int number_of_wheels(Vehicle *v) {
    return v->get_number_of_wheels();
}

int main(int argc, char **argv) {
    vector<Vehicle *> array;

    for(int i=0; i<10; i++) {
        if(rand() % 2)
            array.push_back(new Car());
        else
            array.push_back(new Bike());
    }

    for(int i=0; i<10; i++) {
        printf("array[%d] has %d wheels\n", i,
            number_of_wheels(array[i]));
        delete array[i];
    }

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week4-c++/07-overriding
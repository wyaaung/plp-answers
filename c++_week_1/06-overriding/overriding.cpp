#include <iostream>
#include <stdlib.h>

#define NUM_VEHICLES 10

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
    Vehicle* array[NUM_VEHICLES];

    for(int i = 0; i < NUM_VEHICLES; ++i) {
        if(rand() % 2)
            array[i] = new Car;
        else
            array[i] = new Bike;
    }

    for(int i = 0; i < NUM_VEHICLES; ++i) {
        cout << "array[" << i << "] has ";
        cout << array[i]->get_number_of_wheels() << " wheels\n";
        delete array[i];
    }

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W1-Classes/06-overriding
#include <stdio.h>

/* Class definition and member function implementation here */
class Vehicle{
    protected:
        int _mileage;
    public:
        Vehicle(int mileage){
            _mileage = mileage;
        }

        int get_mileage(){
            return this->_mileage;
        }
};

class Car : public Vehicle{
    private:
        int _steering_wheels;

    public:
        Car(int mileage, int steering_wheels) : Vehicle(mileage), _steering_wheels(steering_wheels) {
            _steering_wheels = steering_wheels;
            _mileage = mileage;
        }

        int get_steering_wheels(){
            return this->_steering_wheels;
        }
};

class Motorbike : public Vehicle{
    private:
        int _cc_class;

    public:
        Motorbike(int mileage, int cc_class) : Vehicle(mileage), _cc_class(cc_class) {
            _cc_class = cc_class;
            _mileage = mileage;
        }

        int get_cc_class(){
            return this->_cc_class;
        }
};

int main(int argc, char **argv) {
    Vehicle v(20000);  // a Vehicle with mileage = 20000 miles
    Car c1(10000, 2);  // a Car with mileage = 10000 miles and 2 steering wheels
    Car c2(5000, 4);   // a Car with mileage = 5000 miles and 4 steering wheels
    Motorbike m(50000, 500); // a Motorbike with mileage = 50000 miles and class 500cc

    printf("v's mileage is: %d\n", v.get_mileage());
    printf("c1's mileage is: %d, steering wheels: %d\n", c1.get_mileage(),
            c1.get_steering_wheels());
    printf("c2's mileage is: %d, steering wheels: %d\n", c2.get_mileage(),
            c2.get_steering_wheels());
    printf("m's mileage is:  %d, cc class: %d\n", m.get_mileage(),
            m.get_cc_class());

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W1-Classes/04-inheritance
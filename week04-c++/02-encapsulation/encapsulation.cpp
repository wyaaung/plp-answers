#include <stdio.h>

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(float length, float width){
        this.length = length;
        this.width = width;
    }

    float perimeter(){
        return 2.0 * (this.length + this.width);
    }
};

class Circle {
private:
    float radius;

public:
    Circle(float radius){
        this.radius = radius
    }

    float circumference(){
        return 2.0 * 3.14 * this.radius;
    }
};

int main(int argc, char **argv) {
    Rectangle r(10, 20);
    Circle c(1);

    printf("Rectangle l: %f, w: %f, perimeter: %f\n",
            r.length, r.width, r.perimeter());
    printf("Circle r: %f, circumference: %f\n",
            c.radius, c.circumference());

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week4-c++/02-encapsulation
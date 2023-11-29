#include <stdio.h>
#include <iostream>

using namespace std;

class Complex {
private:
    int real{0};
    int imag{0};

public:
    Complex() = default;
    Complex(int real_part, int imaginary_part);
    int get_real_part();
    int get_imaginary_part();
    Complex operator+(Complex const& complex);
    friend ostream &operator<<(ostream &out, const Complex &c);
};

Complex::Complex(int real_part, int imaginary_part) 
    : real{real_part}, imag{imaginary_part} {};

int Complex::get_real_part() {
    return real;
}

int Complex::get_imaginary_part() {
    return imag;
}

/* implement operator overrides here */

Complex Complex::operator+(Complex const& obj) {
    Complex result;
    result.real = real + obj.real;
    result.imag = imag + obj.imag;
    return result;
}

ostream & operator << (ostream &out, const Complex &c) {
    out << '(' << c.real << '+' << c.imag << "i)";
    return out;
}

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);

    cout << c1 + c2 << "\n"; // should print (13+16i)

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W1-Classes/08-overloading2
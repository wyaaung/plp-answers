#include <iostream>

template<typename R> 
class Complex {
private:
    R real{0};
    R imag{0};

public:
    Complex() = default;
    Complex(R real_part, R imaginary_part);
    R get_real_part();
    R get_imaginary_part();

    Complex operator+(Complex& other);
};

template<typename R> Complex<R>::Complex(R real_part, R imaginary_part) 
    : real{real_part}, imag{imaginary_part} {};

template<typename R> R Complex<R>::get_real_part() {
    return real;
}

template<typename R> R Complex<R>::get_imaginary_part() {
    return imag;
}

template<typename R> Complex<R> Complex<R>::operator+(Complex& other) {
    return Complex(real + other.real, imag + other.imag);
}

template<typename R> std::ostream& operator<<(std::ostream& out, Complex<R> c) {
    return std::cout << "(" << c.get_real_part() << "+" << c.get_imaginary_part() << "i)";
}

template <typename T>
void add_and_print(T t1, T t2) {
    std::cout << t1 << " + " << t2 << " = " << t1 + t2 << "\n";
}

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);
    Complex c3(4.1, 5.1);
    Complex c4(8.9, 10.9);

    add_and_print(c1, c2); // should print "(4+5i) + (9+11i) = (13+16i)"
    add_and_print(c3, c4); // should print "(4.1+5.1i) + (8.9+10.9i) = (13+16i)"

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/02-ctemplates

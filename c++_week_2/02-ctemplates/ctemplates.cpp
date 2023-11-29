#include <iostream>

template<typename R, typename I>
class Complex {
private:
    R real{0};
    I imag{0};

public:
    Complex() = default;
    Complex(R real_part, I imaginary_part);
    R get_real_part();
    I get_imaginary_part();

    Complex operator+(Complex& other);
};

template<typename R, typename I> Complex<R ,I>::Complex(R real_part, I imaginary_part) 
    : real{real_part}, imag{imaginary_part} {};

template<typename R, typename I> R Complex<R ,I>::get_real_part() {
    return real;
}

template<typename R, typename I> I Complex<R ,I>::get_imaginary_part() {
    return imag;
}

template<typename R, typename I> Complex<R ,I> Complex<R ,I>::operator+(Complex& other) {
    return Complex(real + other.real, imag + other.imag);
}

template<typename R, typename I> std::ostream& operator<<(std::ostream& out, Complex<R, I> c) {
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

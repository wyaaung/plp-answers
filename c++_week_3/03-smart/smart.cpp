#include <vector>
#include <cstdlib>
#include <algorithm>
#include <numeric>
#include <iostream>

class Base {
    public:
        Base(int num) : num{num} {};

        int get_sum() {
            return num;
        }

    private:
        int num;
};

class Derived1 : public Base {
    public:
        Derived1(int num, int num1) : Base(num), num1{num1} {};

        int get_sum() {
            return Base::get_sum() + num1;
        }
    private:
        int num1;
};

class Derived2 : public Derived1 {
    public:
        Derived2(int num, int num1, int num2) : Derived1(num, num1), num2{num2} {};

        int get_sum() {
            return Derived1::get_sum() + num2;
        }
    private:
        int num2;
};

std::vector<std::unique_ptr<Base>> generate_vector() {
    std::vector<std::unique_ptr<Base>> v;
    for (int i = 0; i < 1000; ++i) {
        int num = rand() % 3;
        if (num == 0)
            v.push_back(std::make_unique<Base>(rand() % 10));
        else if (num == 1)
            v.push_back(std::make_unique<Derived1>(rand() % 10, rand() % 10));
        else if (num == 2)
            v.push_back(std::make_unique<Derived2>(rand() % 10, rand() % 10, rand() % 10));
        }

    return v;
}

int main(int argc, char** argv) {
    srand(0);
    int res{0};
    {
        std::vector<std::unique_ptr<Base>> v = generate_vector();
        res = std::accumulate(v.begin(), v.end(), 0, [] (int& acc, const std::unique_ptr<Base> &obj) {return acc + obj->get_sum();});
    }
    std::cout << res << "\n";
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W3-CPP11/03-smart

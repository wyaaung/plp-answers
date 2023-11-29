#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

#define SIZE (32 * 1024 * 1024)

int dot(std::vector<int>& a, std::vector<int>& b)
{
    int sum = 0;
    for (int i = 0; i < a.size(); ++i) {
        sum += a[i] * b[i];
    }
    return sum;

}

void init_vector(std::vector<int>& v)
{
    v.resize(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        if ((rand() % 0xfff) == 0)
            v[i] = rand() & 0xf;
    }
}


int main(int argc, char **argv)
{
    srand(0);
    std::vector<int> a, b;
    init_vector(a);
    init_vector(b);

    std::cout << dot(a, b) << "\n";

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/04-map

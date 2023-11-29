#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

#define SIZE (32 * 1024)

void init_vector(std::vector<int>& v) {
    v.resize(SIZE);
    for (int i = 0; i < v.size(); ++i)
        v[i] = rand() & 0xf;
}


void copy_odds(std::vector<int>& a, std::vector<int>& b)
{
    std::vector<int>::iterator iter = a.begin();
    for(iter; iter < a.end(); iter++) {
        if (*iter % 2) {
            b.push_back(*iter);
        }
    }
}

int main(int argc, char **argv)
{
    srand(0);
    std::vector<int> a, b;
    init_vector(a);
    copy_odds(a, b);

    std::cout << b.size() << "\n";

    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/05-iterators

// Note: If you ran on Mac, you should expect 16458, not 16258.

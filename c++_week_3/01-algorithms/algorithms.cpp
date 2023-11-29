#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

#define SIZE (32 * 1024)

void init_vector(std::vector<int>& v)
{
  v.resize(SIZE);
  for (auto& item: v)
    item = rand() & 0xf;
}


void copy_odds(std::vector<int>& a, std::vector<int>& b)
{
  for (auto& item: a) 
    if (item % 2 == 1) 
      b.push_back(item);
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

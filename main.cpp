#include <iostream>
#include "finding_roots.h"

int main() {
  std::pair<int, int> ab{ getInterval() };
  std::cout << "Interval >>>> " << ab.first << " , " << ab.second << std::endl;
  double root{ bisection(ab.first, ab.second) };
  std::cout << "Root is " << root;
  return 0;
}
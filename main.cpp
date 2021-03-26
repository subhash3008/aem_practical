#include <iostream>
#include "finding_roots.h"

int main() {
  std::vector<std::pair<int, int>> intervals{ getInterval() };
  for( auto interval: intervals) {
    std::cout << "Interval >>>> " << interval.first << " , " << interval.second << std::endl;
    double root{ bisection(interval.first, interval.second) };
    std::cout << "Root is " << root << std::endl;
  }
  return 0;
}
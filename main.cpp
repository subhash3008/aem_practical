#include <iostream>
#include "finding_roots.h"

int main() {
  std::vector<std::pair<int, int>> intervals{ getInterval() };
  for( auto interval: intervals) {
    std::cout << "Interval >>>> " << interval.first << " , " << interval.second << std::endl;
    // double root{ bisection(interval.first, interval.second) };
    // std::cout << "Root is " << root << std::endl;
    // double rootRegulaFalsi{ regulaFalsi(interval.first, interval.second) };
    // std::cout << "Regula Falsi Root is " << rootRegulaFalsi << std::endl;
    // double rootSecant{ secant(interval.first, interval.second) };
    // std::cout << "Secant root is " << rootSecant << std::endl;
    double rootNewton{ newton(interval.first, interval.second) };
    std::cout << "Newton root is " << rootNewton << std::endl;
  }
  return 0;
}
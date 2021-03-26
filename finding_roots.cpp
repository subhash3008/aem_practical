#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <utility>

template <class T> 

// Put value of x in equation
long double getVal(T x) {
  return (x - (.2 * sin(x)) - .5);
} 

std::vector<std::pair<int, int>> getInterval() {
  int min{ -10 };
  int max {};
  std::vector<std::pair<int, int>> res;
  bool currentPositive = false;
  while(min <= 10) {
    long double fx = getVal(min);
    if (currentPositive != (fx > 0)) {
      max = min--;
      res.push_back(std::make_pair(min, max));
      min += 2;
      currentPositive = !currentPositive;
    } else {
      ++min;
    }
  }
  return res;
}


// Finds root of an equation using bisection method
double bisection(int x, int y) {
  long double lastVal{ INT_MIN };
  double intMin{ x + 0.0};
  double intMax{ y + 0.0};
  int i{ 0 };
  while(intMin < intMax || i > 500) {
    double xmid = ((intMin + intMax) / 2);
    long double val = getVal(xmid);
    // std::cout << "Val : " << val << ", Last Val : " << lastVal << std::endl;
    if (val == lastVal) {
      std::cout <<  "Root found in : " << i + 1 << " iteration" << std::endl;
      return xmid;
    } else {
      lastVal = val;
    }
    if (val > 0) {
      intMax = xmid;
    } else {
      intMin = xmid;
    }
    ++i;
  }
  std::cout << "No root found !!!! Iterations ran : " << i << std::endl;
  return 0.0;
}

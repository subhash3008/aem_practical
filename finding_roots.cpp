#include <iostream>
#include <climits>
#include <cmath>
#include <utility>

template <class T> 

// Put value of x in equation
long double getVal(T x) {
  /**
   * Chapter 2 Example 1
   * a = .5
   * b = 9
   * eqn => e^(ax) - ax - b = 0
   */
  return (exp(.5 * x) - (.5 * x) - 9);
} 

std::pair<int, int> getInterval() {
  int min{ -10 };
  int max {};
  while(true) {
    long double fx = getVal(min);
    if (fx > 0) {
      max = min--;
      break;
    } else {
      ++min;
    }
  }
  return std::make_pair(min, max);
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
    std::cout << "Val : " << val << ", Last Val : " << lastVal << std::endl;
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
  std::cout << "No root found !!!!";
  return 0.0;
}

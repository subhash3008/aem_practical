#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <utility>

template <class T> 

// Put value of x in equation
long double getVal(T x) {
  return (exp(.5 * x) - (.5 * x) - 9);
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
      std::cout << "Root found in : " << i + 1 << " iteration" << std::endl;
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

// Finding roots of an equation using secant method
double getSecantVal(double xprev, double xcurr) {
  return (((xprev * getVal(xcurr)) - (xcurr * getVal(xprev))) / (getVal(xcurr) - getVal(xprev)));
}

double secant(int a, int b) {
  double xprev{ a + 0.0 };
  double xcurr{ b + 0.0};
  int i{ 0 };
  while(i < 500) {
    double xnext{ getSecantVal(xprev, xcurr) };
    // std::cout << "Next value of x : " << xnext << std::endl;
    if (xnext == xcurr) {
      std::cout << "Secant Root found in : " << i + 1 << " iteration" << std::endl;
      return xnext;
    } else {
      xprev = xcurr;
      xcurr = xnext;
    }
    ++i;
  }
  std::cout << "No root found !!!! Iterations ran : " << i << std::endl;
  return 0.0;
}

// Finding Root with Newton method
double getDerivedVal(double x) {
  return ((.5 * exp(.5 * x)) - .5);
} 

double getNewtonVal(double xcurr) {
  return (xcurr - (getVal(xcurr) / getDerivedVal(xcurr)));
}

double newton(int min, int max) {
  double xcurr = (static_cast<double>(min + max) / 2);
  int i{ 0 };
  while (i < 500) {
    double xnext{ getNewtonVal(xcurr) };
    if (xnext == xcurr) {
      std::cout << "Newton Root found in : " << i + 1 << " iteration" << std::endl;
      return xnext;
    }
    xcurr = xnext;
    ++i;
  }
  std::cout << "No root found !!!! Iterations ran : " << i << std::endl;
  return 0.0;
}
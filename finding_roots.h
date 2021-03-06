#ifndef FINDING_ROOTS_H
#define FINDING_ROOTS_H

#include <utility>
#include <vector>

long double getVal(int);
std::vector<std::pair<int, int>> getInterval();
double bisection(int, int);
double regulaFalsi(int, int);
double getSecantVal(double, double);
double secant(int, int);
double getDerivedVal(double);
double getNewtonVal(double);
double newton(int, int);

#endif
#include "calculator/calculator.hpp"

using namespace calc;

double Calculator::add(double x, double y) { return x + y; }
double Calculator::sub(double x, double y) { return x - y; }
double Calculator::mul(double x, double y) { return x * y; }
double Calculator::div(double x, double y) { return x / y; }
double Calculator::sqrt(double x) { return _square_root.compute(x); }


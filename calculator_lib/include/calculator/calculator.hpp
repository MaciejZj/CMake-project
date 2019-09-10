#pragma once
#include "calculator/square_root.hpp"

namespace calc {
class Calculator {
  public:
	explicit Calculator(Square_root &square_root) : _square_root{square_root} {}
	double add(double x, double y);
	double sub(double x, double y);
	double mul(double x, double y);
	double div(double x, double y);
	double sqrt(double x);

  private:
	Square_root& _square_root;
};
} // namespace calc


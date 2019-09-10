#include "calculator/calculator.hpp"
#include "calculator/square_root.hpp"
#include <iostream>

int main() {
	calc::Square_root sqrt;
	calc::Calculator clc{sqrt};
	std::cout << clc.add(1, 2) << "\n";
	return 0;
}


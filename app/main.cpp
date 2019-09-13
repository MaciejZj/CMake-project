#include "calculator/calculator.hpp"
#include "calculator/square_root.hpp"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <iostream>

int main() {
	calc::Square_root sqrt;
	calc::Calculator clc{sqrt};
	std::cout << clc.add(1, 2) << "\n";

	auto console = spdlog::stdout_color_mt("console");    
    spdlog::get("console")->info("Hello spdlog!");

	return 0;
}


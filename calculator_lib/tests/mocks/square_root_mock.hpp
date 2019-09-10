#include "calculator/square_root.hpp"
#include <gmock/gmock.h>

class Mock_square_root : public calc::Square_root {
  public:
	MOCK_METHOD(double, compute, (double x));
};


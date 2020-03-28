#include <gmock/gmock.h>

#include "calculator/square_root.hpp"

class Mock_square_root : public calc::Square_root {
   public:
    MOCK_METHOD(double, compute, (double x));
};

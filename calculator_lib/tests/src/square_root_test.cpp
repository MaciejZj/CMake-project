#include "calculator/square_root.hpp"

#include <gtest/gtest.h>

using namespace calc;

TEST(SquareRootTest, SquaresCorrectly) {
    Square_root sqrt;
    ASSERT_EQ(sqrt.compute(4), 2);
}

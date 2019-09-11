#include "calculator/calculator.hpp"
#include "square_root_mock.hpp"
#include <gtest/gtest.h>

using namespace ::testing;
using namespace calc;

class CalculatorTest : public Test {
  public:
	NiceMock<Mock_square_root> sqrt_mock;
	Calculator clc{sqrt_mock};
};

TEST_F(CalculatorTest, AddsCorrectly) {
	EXPECT_EQ(clc.add(1, 2), 3);
}

TEST_F(CalculatorTest, SubtractsCorrectly) {
	EXPECT_EQ(clc.sub(5, 2), 3);
}

TEST_F(CalculatorTest, MultipliesCorrectly) {
	EXPECT_EQ(clc.mul(2, 3), 6);
}

TEST_F(CalculatorTest, SquaresCorrectly) {
	EXPECT_CALL(sqrt_mock, compute(_))
		.WillOnce(Return(4));
	EXPECT_EQ(clc.sqrt(16), 4);
}


#include "gtest/gtest.h"

//http://code.google.com/p/googletest/wiki/V1_6_Primer

int Factorial(int n) {
  if (n <= 1) return 1;
  else return n*Factorial(n-1);
}

// Tests factorial of 0.
TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(1, Factorial(0));
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(40320, Factorial(8));
  EXPECT_GE(100, Factorial(3));
}

const char* getString() {
  return "Hello!";
}

TEST(StringTest, HelloTest) {
  EXPECT_STREQ("Hello!", getString());
  EXPECT_TRUE(false);
}

TEST(TestTestCase, TestTest) {
  EXPECT_TRUE(true);
}

GTEST_API_ int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS(); 
}
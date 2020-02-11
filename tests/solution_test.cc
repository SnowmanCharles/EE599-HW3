#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

//Q2************************************************************************************************
TEST(TwoSumTest, SuccessCase) {
  Solution solution;
  std::vector<int> arr = {1,2,3,4,5,-1};
  std::vector<int> res = solution.twoSum(arr, 8);
  EXPECT_EQ(8, arr[res[0]] + arr[res[1]]);
}

TEST(TwoSumTest, FailCase) {
  Solution solution;
  std::vector<int> arr = {1,2,3,4,5,-1};
  std::vector<int> res = solution.twoSum(arr, 10);
  EXPECT_EQ(0, res.size());
}

//Q4************************************************************************************************
TEST(IsValidBrackets, FailCase) {
  Solution solution;
  EXPECT_EQ(false, solution.isValidBrackets("(7h+[5c)+7])"));
}

TEST(IsValidBrackets, SuccessCase) {
  Solution solution;
  EXPECT_EQ(true, solution.isValidBrackets("{}()[(){()}]"));
}

TEST(IsValidBrackets, EmptyCase) {
  Solution solution;
  EXPECT_EQ(true, solution.isValidBrackets(""));
}
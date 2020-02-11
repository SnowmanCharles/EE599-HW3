#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  std::string PrintHelloWorld();

  //Q2************************************************************************************************
  std::vector<int> twoSum(std::vector<int> arr, int num);

  //Q4************************************************************************************************
  bool isValidBrackets(std::string s);

  //Q6************************************************************************************************
  void queryVector(std::vector<int> arr);

private:
  void printMenu(std::vector<int> arr);
};

#endif
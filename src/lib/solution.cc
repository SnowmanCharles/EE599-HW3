#include "solution.h"
#include "unordered_map"
#include "stack"
#include <iostream>

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}


//Q2************************************************************************************************
std::vector<int> Solution::twoSum(std::vector<int> arr, int num) {//Time complexity: O(n)
  std::unordered_map<int, int> map;
  std::vector<int> res;
  for (int i = 0; i < arr.size(); i++) {
    if (map.count(num - arr[i]) > 0) {
      res.push_back(map[num - arr[i]]);
      res.push_back(i);
      return res;
    }
    map[arr[i]] = i;
  }
  return res;
}

//Q4************************************************************************************************
bool Solution::isValidBrackets(std::string s) {//Time complexity: O(n)
  std::stack<char> st;
  std::unordered_map<char, char> map;
  map[')'] = '(';
  map[']'] = '[';
  map['}'] = '{';
  for (char c : s) {
    if (c == '(' || c == '{' || c == '[') {
      st.push(c);
    } else if (c == ')' || c == ']' || c == '}') {
      if (st.empty()) return false;
      if (st.top() == map[c]) st.pop();
      else return false;
    } else {
      continue;
    }
  }
  return st.empty();
}

//Q6************************************************************************************************
void Solution::queryVector(std::vector<int> arr) {
  int pos = 0;
  while(true) {
    printMenu(arr);
    int a, i;
    std::cin >> a;
    if (a == 1) {
      pos = 0;
      std::cout << "Output: " << arr[pos] << std::endl;
    } else if (a == 2) {
      pos = arr.size() - 1;
      std::cout << "Output: " << arr[pos] << std::endl;
    } else if (a == 3) {
      std::cout << "Output: " << arr[pos] << std::endl;
    } else if (a == 4) {
      std::cout << "Enter the value of i:" << std::endl;
      std::cin >> i;
      if (i < 0) {
        std::cout << "Value of i cannot be negative" << std::endl;
      } else if (pos + i >= arr.size()) {
        std::cout << "Sorry, you can not traverse " << i << "positions from the current index" << std::endl;
      } else {
        pos += i;
        std::cout << "Output:" << arr[pos] << std::endl; 
      }
    } else {
      std::cout << "Exit!" << std::endl;
      break;
    }
  }
}

void Solution::printMenu(std::vector<int> arr) {
  std::cout << "*****************************************************************" << std::endl;
    std::cout << "[";
    for (int i = 0; i < arr.size() - 1; i++) {
      std::cout << arr[i] << ", ";
    }
    if (arr.size() > 0) {
      std::cout << arr[arr.size() - 1];
    }
    std::cout << "]" << std::endl;
    std::cout << "*****************************************************************" << std::endl;
    std::cout << "Please choose any of the following options:" << std::endl;
    std::cout << "1. What is the first element?" << std::endl;
    std::cout << "2. What is the last element?" << std::endl;
    std::cout << "3. What is the current element?" << std::endl;
    std::cout << "4. What is the ith element from the current location?" << std::endl;
    std::cout << "5. Exit." << std::endl;
}


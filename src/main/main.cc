#include <iostream>
#include "src/lib/solution.h"
#include "src/lib/SinglyLinkedList.h"
using namespace std;

int main()
{
    Solution solution ;
    std::cout << solution.PrintHelloWorld() << std::endl;

//Q1*************************************************************************************************
    std::vector<int> arr = {1,2,3,4,5,-1};
    std::vector<int> res = solution.twoSum(arr, 8);
    std::cout << res[0] << " " << res[1] << std::endl;

//Q4*************************************************************************************************
    std::cout << solution.isValidBrackets("{}()[(){()}]") << std::endl;

//Q6*************************************************************************************************
    std::vector<int> vec = {1, 4, 5, 23, 100, 12, 18, 175};
    solution.queryVector(vec);

//Q3*************************************************************************************************
    vector<int> vec1 = {1,2,3,4,5};
    SinglyLinkedList mylist(vec1, 1);
    cout << "valueAfterTail: " << mylist.tail->next->val << endl;

    return EXIT_SUCCESS;
}
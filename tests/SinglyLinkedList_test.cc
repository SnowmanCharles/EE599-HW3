#include "src/lib/SinglyLinkedList.h"
#include "gtest/gtest.h"
//#include <vector>
using namespace std;

TEST(NonParaConstructorTest, NonParaConstructorTest) {
  SinglyLinkedList list;
  EXPECT_EQ(nullptr, list.head);
  EXPECT_EQ(nullptr, list.tail);
  EXPECT_EQ(0, list.size);
}

TEST(WithParaConstructorTest, IOutOfBoundry) {
  vector<int> input = {1,2,3,4,5};
  SinglyLinkedList list(input, -1);
  EXPECT_EQ(nullptr, list.tail->next);
  EXPECT_EQ(1, list.head->val);
  EXPECT_EQ(5, list.tail->val);
  EXPECT_EQ(5, list.size);
}

TEST(WithParaConstructorTest, IInBoundry) {
  vector<int> input = {1,2,3,4,5};
  SinglyLinkedList list(input, 1);
  EXPECT_EQ(list.head->next, list.tail->next);
  EXPECT_EQ(1, list.head->val);
  EXPECT_EQ(5, list.tail->val);
  EXPECT_EQ(5, list.size);
}

// TEST(DeConstructor, DeConstructorTest) {
//   vector<int> input = {1,2,3,4,5};
//   SinglyLinkedList list(input, 8);
//   EXPECT_EQ(5, list.size);
//   list.~SinglyLinkedList();
//   EXPECT_EQ(nullptr, list.head);
//   EXPECT_EQ(nullptr, list.tail);
//   EXPECT_EQ(0, 0);
// }

// TEST(EmptyTest, RealEmptyCase) {
//     SinglyLinkedList list;
//     EXPECT_EQ(true, list.empty());
// }

// TEST(EmptyTest, NonEmptyCase) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     EXPECT_EQ(false, list.empty());
// }

// TEST(ListSizeTest, EmptyCase) {
//     SinglyLinkedList list;
//     EXPECT_EQ(0, list.listSize());
// }

// TEST(ListSizeTest, NonEmptyCase) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     EXPECT_EQ(5, list.listSize());
// }

// TEST(PushBackTest, PushBackTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     list.push_back(6);
//     EXPECT_EQ(6, list.size);
//     EXPECT_EQ(6, list.tail->val);
// }

// TEST(PushFrontTest, PushFrontTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     list.push_front(6);
//     EXPECT_EQ(6, list.size);
//     EXPECT_EQ(0, list.head->val);
// }

// TEST(InsertAfterTest, InsertAfterTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     list.insert_after(list.head, 6);
//     EXPECT_EQ(6, list.size);
//     EXPECT_EQ(6, list.head->next->val);
// }

// TEST(EraseTest, EraseTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     list.erase(list.head);
//     EXPECT_EQ(4, list.size);
//     EXPECT_EQ(2, list.head->val);
// }

// TEST(PopFrontTest, PopFrontTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     list.pop_front();
//     EXPECT_EQ(4, list.size);
//     EXPECT_EQ(2, list.head->val);
// }

// TEST(PopBackTest, PopBackTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     list.pop_back();
//     EXPECT_EQ(4, list.size);
//     EXPECT_EQ(4, list.tail->val);
// }

// TEST(FrontTest, FrontTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     EXPECT_EQ(1, list.front());
// }

// TEST(BackTest, BackTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     EXPECT_EQ(5, list.back());
// }

// TEST(GetBackPointerTest, GetBackPointerTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     EXPECT_EQ(5, list.GetBackPointer()->val);
// }

// TEST(GetIthPointerTest, GetIthPointerTest) {
//     vector<int> input = {1,2,3,4,5};
//     SinglyLinkedList list(input, 8);
//     EXPECT_EQ(3, list.GetIthPointer(2)->val);
// }
#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include "vector"
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {};
};

class SinglyLinkedList {
public:
    //default constructor
    SinglyLinkedList();
    // // Creates a linked list out of vector “inputs” and connects the last item’s next to i(th) item in the list.
    // //- If i is -1, the last item’s next is nullptr.
    // //- If i is greater than input size, the last item’s next is nullptr.
    SinglyLinkedList(const vector<int> &inputs, int i);
    ~SinglyLinkedList(); //destructor, cleans up
    bool empty();//checks if empty
    int listSize();//returns size
    void push_back(int i);//inserts at the back
    void push_front(int i);//inserts at the front
    void insert_after(ListNode* p, int i); //inserts value i after p
    void erase(ListNode* p);//erase node p
    void pop_front();//removes the first item
    void pop_back();//removes the last item
    int back();//returns the value of the last element
    int front();//returns the value of the first element

    ListNode *GetBackPointer();//returns pointer to the last item
    ListNode *GetIthPointer(int i);//returns pointer to the (i)th element

    // // Prints the list: ex. Empty list: {}. List with items: {1, 2, 3}
    void print();
    ListNode *head;//pointer to the first element
    ListNode *tail;//pointer to the last element
    int size;
};

#endif

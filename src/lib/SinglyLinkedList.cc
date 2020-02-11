#include "SinglyLinkedList.h"
//#include "vector"
#include "iostream"
//using namespace std;

SinglyLinkedList::SinglyLinkedList() {//O(1)
    head = nullptr;
    tail = nullptr;
    size = 0;
}

SinglyLinkedList::SinglyLinkedList(const vector<int> &inputs, int x) {//O(n)
    if (inputs.size() == 0) return;
    ListNode* temp = new ListNode(inputs[0]);
    head = temp;
    tail = temp;
    for (int i = 1; i < inputs.size(); i++) {
        temp = new ListNode(inputs[i]);
        tail->next = temp;
        tail = tail->next;
    }
    size = inputs.size();
    //cout << "size:" << size << " " << "x:" << x << endl;
    if (x >= 0 && x < size) {
        tail->next = GetIthPointer(x);
    }
}

SinglyLinkedList::~SinglyLinkedList() {//O(n)
    ListNode *cur = head, *temp = head;
    while (size-- > 0) {
        temp = cur->next;
        delete cur;
        cur = temp;
    }
    head = nullptr;
    tail = nullptr;
}

bool SinglyLinkedList::empty() {//O(1)
    return size == 0;
}

int SinglyLinkedList::listSize() {
    return size;
}

void SinglyLinkedList::push_back(int i) {//O(1)
    ListNode* temp = new ListNode(i);
    if (head == nullptr) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
    size++;
}

void SinglyLinkedList::push_front(int i) {//O(1)
    ListNode *temp = new ListNode(i);
    if (head == nullptr) {
        head = temp;
        tail = temp;
    } else {
        temp->next = head->next;
        head->next = temp;
    }
    size++;
}

void SinglyLinkedList::insert_after(ListNode *p, int i) {//O(1)
    ListNode *temp = new ListNode(i);
    temp->next = p->next;
    p->next = temp;
    if (tail == p) tail = temp;
    size++;
}

void SinglyLinkedList::erase(ListNode *p) {//O(1)
    if (p == head) {
        head = head->next;
        if (head == nullptr) tail = nullptr;
        delete p;
    } else {
        ListNode *temp = head;
        while (temp->next != p) temp = temp->next;
        if (tail == p) tail = temp;
        temp->next = p->next;
        delete p;
    }
    size--;
}

void SinglyLinkedList::pop_front() {//O(1)
    if (head == nullptr) return;
    ListNode *temp = head;
    head = head->next;
    if (head == nullptr) tail = nullptr;
    delete temp;
    size--;
}

void SinglyLinkedList::pop_back() {//O(1)
    if (head == nullptr) return;
    if (head == tail) {
        delete tail;
        head = nullptr;
        tail = nullptr;
    } else {
        ListNode *temp = head;
        while (temp->next != tail) temp = temp->next;
        temp->next = nullptr;
        delete tail;
        tail = temp;
    }
    size--;
}

int SinglyLinkedList::front() {//O(1)
    return head->val;
}

int SinglyLinkedList::back() {//O(1)
    return tail->val;
}

ListNode* SinglyLinkedList::GetBackPointer() {//O(1)
    return tail;
}

ListNode* SinglyLinkedList::GetIthPointer(int i) {//O(n)
    if (i < 0 || i >= size) return nullptr;
    ListNode* temp = head;
    while (i-- > 0) {
        temp = temp->next;
    }
    return temp;
}

void SinglyLinkedList::print() {//O(n)
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
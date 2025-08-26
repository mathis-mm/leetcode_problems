#include <iostream>
#include <cstdlib>
#include <algorithm>

struct ListNode {
	int val;
 	ListNode *next;
 	ListNode() : val(0), next(nullptr) {}
 	ListNode(int x) : val(x), next(nullptr) {}
 	ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	if (!list1)
		return(list2);
	else if (!list2)
		return (list1);
	ListNode* mergeList1 = new ListNode();
	ListNode* current1 = mergeList1;
	while (list1) {
		current1->val = list1->val;
		list1 = list1->next;
		if (list1) {
			current1->next = new ListNode();
			current1 = current1->next;
		}
	}
	if (!(current1->next)) {
		current1->next = new ListNode();
		current1 = current1->next;
	}	
	while (list2) {
		current1->val = list2->val;
		list2 = list2->next;
		if (list2) {
			current1->next = new ListNode();
			current1 = current1->next;
		}
	}
	ListNode* sortedList = mergeList1;
	bool swapped;
	do {
		swapped = false;
		ListNode* current = sortedList;
		while (current && current->next) {
			if (current->val > current->next->val) {
				std::swap(current->val, current->next->val);
				swapped = true;
			}
			current = current->next;
		}
	} while (swapped);
	return (sortedList);
    }
};

int main(void) {
	Solution sol;
	ListNode* list1 = new ListNode(rand());
	ListNode* list2 = new ListNode(rand());
	ListNode* current1 = list1;
	ListNode* current2 = list2;
	for(int i = 0; i < 5; i++) {
		current1->next = new ListNode(rand());
		current1 = current1->next;
		current2->next = new ListNode(rand());
		current2 = current2->next;
	}
	ListNode* val = sol.mergeTwoLists(list1, list2);
	// here sol.?
}

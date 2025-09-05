// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
// Definition for singly-linked list.
#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
	    if (!head) return (head);
	    ListNode* curr = head;
	    while (curr->next) {
		    if (curr->val == curr->next->val) {
			    ListNode* temp = curr->next;
			    curr->next = curr->next->next;
			    delete temp;
		    } else {
			    curr = curr->next;
		    }
	    }
	    return (head);
    }
};

int main(void) {
	Solution sol;

	ListNode* list = new ListNode(1);
	list->next = new ListNode(4);
	list->next->next = new ListNode(4);
	list->next->next->next = new ListNode(5);

	ListNode* result = sol.deleteDuplicates(list);
	while (result) {
		printf("%d, ", result->val);
		result = result->next;
	}
	printf("\n");
	while (list) {
		ListNode* temp = list;
		list = list->next;
		printf("delete %p ...\n", temp);
		delete temp;
	}
}

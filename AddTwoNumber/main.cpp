/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	    ListNode* result = new ListNode();
	    ListNode* temp = result;
	    int e = 0;
	    while (l1 || l2) {
		    int v1 = l1 ? l1->val : 0;
		    int v2 = l2 ? l2->val : 0;
		    int sum = v1 + v2 + e;

		    if (sum > 9) {
			    result->val = sum % 10;
			    e = 1;
		    }
		    else {
			    result->val = sum;
			    e = 0;
		    }
		    l1 = l1 ? l1->next : nullptr;
		    l2 = l2 ? l2->next : nullptr;
		    if (l1 || l2 || e) {
		    	result->next = new ListNode();
		    	result = result->next;
		    }
	    }
	    if (e == 1)
		    result->val = 1;
	    return (temp);
    }
};

int main(void) {
	Solution sol;

	ListNode* l1 = new ListNode();
	ListNode* l2 = new ListeNode();

	

	sol.addTwoNumbers();
}

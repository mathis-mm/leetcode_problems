#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
	    std::vector<int>::iterator it = find(nums.begin(), nums.end(), target);
	    if (it != nums.end())
		return (it - nums.begin());
	    else {
		    for (int i = 0; i < nums.size(); i++) {
			    if (target > nums[i])
				    continue;
			    else
				    return (i);
		    }
	    }
    }
};

int main(void) {
	Solution sol;
	std::vector<int> nums = {2, 3, 56, 3};
	printf("%d", sol.searchInsert(nums, 7));
}

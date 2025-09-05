#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
	    std::vector<int> sort;
	    for (int i = 0; i < nums.size(); i++) {
		    if (std::find(sort.begin(), sort.end(), nums[i]) == sort.end())
			    sort.push_back(nums[i]);
	    }
	    nums.clear(); std::copy(sort.begin(), sort.end(), back_inserter(nums)); return (sort.size());
    }
};

int main(void) {
	Solution sol;
	std::vector<int> list = {1, 1, 2};
	printf("%d", sol.removeDuplicates(list));
}

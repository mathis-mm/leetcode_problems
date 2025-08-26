#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
	nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
	return (nums.size());
    }
};

int main(void) {
	Solution sol;
	std::vector<int> y = {0, 1, 2, 2, 3};
	printf("%d", sol.removeElement(y, 2));
}

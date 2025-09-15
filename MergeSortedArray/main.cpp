#include <vector>
#include <iostream>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        std::vector<int> merged(nums1.begin(), nums1.begin() + m);
        merged.insert(merged.begin(), nums2.begin(), nums2.end());
        sort(merged.begin(), merged.end());
        nums1 = merged;
    }
};

int main(void) {
    Solution sol;
    int m = 3;
    int n = 3;
    std::vector<int> nums1 = {13, 3, 4, 0, 0, 0};
    std::vector<int> nums2 = {5, 9, 23};
    sol.merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++) {
        printf("%d\n", nums1[i]);
    }
}
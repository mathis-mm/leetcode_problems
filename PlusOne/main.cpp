#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
	std::vector<int> plusOne(std::vector<int>& digits) {
		int e = 0;
		if (digits.size() >= 2 && digits[0] == 9 && digits[1] == 9) {
			digits[0] = 1;
			digits[1] = 0;
			digits.push_back(0);
			return (digits);
		}
		else if (digits.size() == 1 && digits[digits.size() - 1] == 9) {
			digits[0] = 1;
			digits.push_back(0);
			return (digits);
		}
		for (int i = 0; i < digits.size(); i++) {
			if (digits[i] == 9) {
				digits[i] = 1;
				digits.push_back(0);
				e++;
			}
		}
		if (e == digits.size()) {
			digits.assign(digits.size(), 0);
			digits.insert(digits.begin(), 1);
		}
		else if (e == 0)
			digits[digits.size() - 1] += 1;
		return (digits);
    }
};

int main(void) {
	Solution sol;
	std::vector<int> test = {9, 9};
	sol.plusOne(test);
	for (int i = 0; i < test.size(); i++)
		printf("%d", test[i]);
}

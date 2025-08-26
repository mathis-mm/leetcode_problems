#include <iostream>
#include <string>

class Solution {
public:
	std::string addBinary(std::string a, std::string b) {
		int num1 = std::stoi(a, nullptr, 2);
		int num2 = std::stoi(b, nullptr, 2);

		int sum = num1 + num2;

		return (std::bitset<16>(sum));
    }
};

int main(void) {
	Solution sol;
	printf("%s", sol.addBinary(""));
}

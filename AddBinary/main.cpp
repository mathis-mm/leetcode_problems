#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string result;
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0)
		    sum += a[i--] - '0';
            if (j >= 0)
		    sum += b[j--] - '0';
            result.push_back(sum % 2 + '0');
            carry = sum / 2;
        }
        std::reverse(result.begin(), result.end());
        return (result);
    }
};

int main(void) {
	Solution sol;
	std::cout << sol.addBinary("11", "1") << std::endl;
}

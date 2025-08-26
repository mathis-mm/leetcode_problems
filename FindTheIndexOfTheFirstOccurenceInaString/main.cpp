#include <string>
#include <iostream>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
	return (haystack.find(needle));
    }
};

int main(void) {
	Solution sol;
	printf("%d", sol.strStr("Hiimbob", "Hidf"));
}

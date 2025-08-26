#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
	std::string searchPrefix(std::vector<std::string> strs) {
		std::vector<std::string>::iterator it = strs.begin();
		std::string prefix;
		for (int i = 0; i < strs[0].size(); i++) {
			char cur = strs[0][i];
			for (int j = 1; j < strs.size(); j++) {
				if (i >= strs[j].size() || strs[j][i] != cur)
					return (prefix);
			}
			prefix.push_back(cur);
		}
		return (prefix);
	}
	bool searchCapital(std::vector<std::string> &strs) {
		std::vector<std::string>::iterator it = strs.begin();
		for (; it != strs.end(); it++) {
			for (int i = 0; i != it->size(); i++) {
				if ((*it)[i] >= 'A' && (*it)[i] <= 'Z')
					return (true);
			}
		}
		return (false);
	}
	std::string longestCommonPrefix(std::vector<std::string>& strs) {
		if (searchCapital(strs))
			return ("");
		return (searchPrefix(strs));
    }
};

int main(void)
{
	std::vector<std::string> strs = {"test", "tete"};
	Solution sol;
	std::cout << sol.longestCommonPrefix(strs) << std::endl;
}

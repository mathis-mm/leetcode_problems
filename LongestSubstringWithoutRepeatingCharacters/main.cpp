#include <iostream>
#include <string>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
	    int maxLen = 0;
	    for (int i = 0; i < s.size(); i++) {
		    std::string save;
		    for (int j = i; j < s.size(); j++) {
			    if (save.find(s[j]) == std::string::npos)
				    save.push_back(s[j]);
			    else
				    break;
		    }
		    if (save.size() > maxLen)
			    maxLen = save.size();
	    }
	    return (maxLen);
    }
};

int main(void) {
	Solution sol;
	printf("%d", sol.lengthOfLongestSubstring("abcabcbb"));
}

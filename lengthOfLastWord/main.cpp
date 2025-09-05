#include <iostream>
#include <string>
#include <cctype>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
	    int i = s.size() - 1;
	    while (s[i]) {
		    if (!(isalpha(s[i])))
			    i--;
		    else {
			    int c = i;
			    while (isalpha(s[i]))
				    i--;
			    return (c - i);
		    }
	    }
    }
};

int main(void) {
	Solution s;
	printf("%d", s.lengthOfLastWord("hello world"));
}

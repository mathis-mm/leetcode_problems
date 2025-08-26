#include <iostream>
#include <cmath>

class Solution {
public:
    int mySqrt(int x) {
	    int i = 1;
	    while (i <= x / i) {
		    if (i * i == x)
			    return (i);
		    i++;
	    }
	    return (i - 1);
    }
};

int main(void) {
	Solution sol;
	printf("%f\n", sqrt(8));
	printf("%d", sol.mySqrt(8));
}

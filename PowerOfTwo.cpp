//take log base 2 of the number, if the resultant number is
//an integer, then the initial number was a power of two.
//And to check whether the resultant number is an integer
//or not we check if ceil and floor values are equal or not
//if they are equal, then the number is an integer.


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0)
            return 0;
        return ceil(log2(n)) == floor(log2(n));
    }
};
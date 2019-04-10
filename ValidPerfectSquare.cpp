class Solution {
public:
	//using built in sqrt function
    bool isPerfectSquare(int num) {
        int chk = sqrt(num);
        return chk*chk == num;
    }
};

//without using sqrt function
#define int unsigned long long 
class Solution {
public:
    bool isPerfectSquare(int n)
    {
        int i;
        for(i=1;i*i<=n;i++)
        {}
        return (i-1)*(i-1) == n;
    }

};
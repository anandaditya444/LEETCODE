//Q.96  use of catalan numbers

class Solution {
public:
    int numTrees(int n) {
        long long int ans = 1;
        
        for(int i=n+1;i<=2*n;i++)
        {
            ans = ans*i/(i-n);
           // ans /= (i-n);   
        }
        return ans/(n+1);
    }
};
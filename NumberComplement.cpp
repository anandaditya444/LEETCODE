class Solution {
public:
    int findComplement(int n) {
        int bin[32];
        int i=0;
        while(n > 0)
        {
            bin[i] = !(n%2);
            n /= 2;
            i++;
        }
        int ans = 0;
        for(int j=0;j<=i-1;j++)
            ans += (bin[j])*(1<<j);
        return ans;
    }
};
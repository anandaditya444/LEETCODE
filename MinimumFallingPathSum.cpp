//Q. 931

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int r = A.size();
        int c = A[0].size();
        
        int dp[r][c+2];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<r;i++)
        {
            dp[i][0] = 105;
            dp[i][c+1] = 105;
        }
        
        for(int i=0;i<c;i++)
            dp[r-1][i+1] = A[r-1][i];
        
        for(int i=r-2;i>=0;i--)
        {
            for(int j=0;j<c;j++)
            {
                dp[i][j+1] = min(dp[i+1][j+1],min(dp[i+1][j-1+1],dp[i+1][j+1+1]))+A[i][j];
            }
        }
        
        int ans = 1000;
        for(int i=0;i<c;i++)
        {
            ans = min(ans,dp[0][i+1]);
        }
        return ans;
    }
};
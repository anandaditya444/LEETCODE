//Q.867

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int r = A.size();
        int c = A[0].size();
        
        vector<vector<int> >ans(c,vector<int>(r));
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[j][i] = A[i][j];
            }
        }
        return ans;
    }
};
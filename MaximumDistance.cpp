//O(n^2) approach

int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    int ans = 0,cur = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(A[j]-A[i] >= 0 && j-i > cur)
            {
                cur = j-i;
                ans = max(ans,cur);
            }
        }
    }
    return ans;
}

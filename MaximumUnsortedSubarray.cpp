//O(n) space

vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int>cur,ans;
    cur = A;
    int n = A.size();
    sort(A.begin(),A.end());
    int start = INT_MAX,end = -1;
    for(int i=0;i<n;i++)
    {
        if(A[i] != cur[i])
        {
            start = min(start,i);
            end = max(end,i);
        }
    }
    if(start == INT_MAX && end == -1)
    {
        ans.push_back(-1);
        return ans;
    }
    ans.push_back(start);
    ans.push_back(end);
    
    return ans;
}


//https://www.interviewbit.com/problems/maximum-unsorted-subarray/
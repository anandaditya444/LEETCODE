Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

class Solution {
public:
    vector<int>temp;    
    
    void combinations(vector<vector<int> >&res,int start,int n,int k)
    {
        if(temp.size() == k)
        {
            res.push_back(temp);
            return;
        }
        for(int i=start;i<=n;i++)
        {
            temp.push_back(i);
            combinations(res,i+1,n,k);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int> >res;
        if(n < k)
            return res;
        combinations(res,1,n,k);
        return res;
    }
};
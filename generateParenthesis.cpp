class Solution {
public:
    
    void helper(string cur,int open,int close,int n,vector<string>&result)
    {
        if(close==n && open==n)
        {
            result.push_back(cur);
            return;
        }
        if(open<n)
            helper(cur+'(',open+1,close,n,result);
        if(close<open)
            helper(cur+')',open,close+1,n,result);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string cur="";
        helper(cur,0,0,n,result);
        return result;
    }
};
class Solution {
public:
    string removeKdigits(string num, int k) {
        int want = num.length()-k;
        string ans = "";
        for(auto x:num)
        {
            while(k && ans.size() && ans.back() > x)
            {
                ans.pop_back();
                k--;
            }
            ans.push_back(x);
        }
        ans.resize(want);
        
        while(ans[0] == '0')
        {
            ans.erase(ans.begin());
        }
        
        return ans.empty() ? "0" : ans;
    }
};
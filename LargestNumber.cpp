//Q. 179

class Solution {
public:
    vector<string>v;
    string largestNumber(vector<int>& nums) {
        for(auto x:nums)
            v.push_back(to_string(x));
        sort(v.begin(),v.end(),[&](string a,string b){ return a+b > b+a; });
        string ans = "";
        for(auto x:v)
            ans += x;
        int i = 0;
        while(ans[i] == '0' && i+1 < ans.length())
            i++;
        return ans.substr(i);
    }
};
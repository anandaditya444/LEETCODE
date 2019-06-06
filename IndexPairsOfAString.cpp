//Q. 1065

class Solution {
public:
    vector<vector<int>> indexPairs(string text, vector<string>& words) {
        vector<vector<int> >ans;
        if(text == "")
            return ans;
        vector<int>v;
        size_t found = 0;
        for(auto &x:words)
        {
            found = -1;
            while(text.find(x,found+1) != string::npos)
            {
                found = text.find(x,found+1);
                v.clear();
                v.push_back(found);
                v.push_back(found+x.length()-1);
                ans.push_back(v);
                v.clear();
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
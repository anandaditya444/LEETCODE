class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<pair<string,string> >letters,digits;
        vector<string>ans;
        int n = logs.size();
        if(n == 0)
            return ans;
        for(auto x:logs)
        {
            string ns = "";
            int flag = 0;
            for(auto c:x)
            {
                if(flag)
                {
                    if(c == ' ')
                        continue;
                    else
                        ns += c;
                }
                if(c == ' ')
                    flag = 1;
            }
            if(isdigit(ns[0]))
                digits.push_back({ns,x});
            else
                letters.push_back({ns,x});
        }
        sort(letters.begin(),letters.end());
        for(auto x:letters)
            ans.push_back(x.second);
        for(auto x:digits)
            ans.push_back(x.second);
        
        return ans;
    }
};
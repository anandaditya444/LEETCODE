//Q. 290

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,int>mp;
        map<string,int>ms;
        int n = pattern.size();
        vector<int>pat,st;
        int i = 1;
        for(auto x:pattern)
        {
            if(!mp[x])
            {
                mp[x] = i;
                i++;
            }
        }
        // for(auto x:mp)
        //     cout<<x.first<<" "<<x.second<<endl;
        string cur = str;
        stringstream iss(str);
        string word;
        i = 1;
        while(iss >> word)
        {
            if(!ms[word])
            {
                ms[word] = i;
                i++;
            }
        }
         // for(auto x:ms)
         //    cout<<x.first<<" "<<x.second<<endl;
        for(auto x:pattern)
        {
            //cout<<mp[x]<<endl;
            pat.push_back(mp[x]);
            
        }
        stringstream uss(cur);
        while(uss >> word)
        {
           // cout<<ms[word]<<endl;
                st.push_back(ms[word]);
            
        }
        // for(int i=0;i<pattern.size();i++)
        //     cout<<pat[i]<<endl;
       return pat == st;
    }
};
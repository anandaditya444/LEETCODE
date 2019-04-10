929. Unique Email Addresses

class Solution {
public:
    // bool comp(pair<string,string>&a,pair<string,string>&b)
    // {
    //     if(a.second )
    // }
    
    int numUniqueEmails(vector<string>& emails) {
        vector<pair<string,string>>s;
        string ff,ss;
        for(int i=0;i<emails.size();i++)
        {
            int flag = 0;
            ff = " ";
            ss = " ";
            for(int j=0;j<emails[i].length();j++)
            {
                if(emails[i][j] == '+')
                    flag = 1;
                if(emails[i][j] == '.' && flag == 0)
                    continue;
                if(flag == 0)
                    ff += emails[i][j];
                if(emails[i][j] == '@')
                    flag = 2;
                if(flag == 2)
                    ss += emails[i][j];
            }
            s.push_back({ff,ss});
        }
        sort(s.begin(),s.end());
        // for(auto c:s)
        //     cout<<c.first<<" "<<c.second<<endl;
        int cnt = 1;
        for(int i=0;i<s.size()-1;i++)
        {
            if((s[i].first != s[i+1].first) || (s[i].second != s[i+1].second))
                cnt++;
        }
        return cnt;
    }
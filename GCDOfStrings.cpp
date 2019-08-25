class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.length();
        int l2 = str2.length();
        string cur,ans;
        
        if(l1 <= l2)
        {
            cur = str2;
            string sub = "";
            for(int i=0;i<l1;i++)
            {
                sub += str1[i];
                while(cur.find(sub) != string::npos)
                {
                    size_t pos = cur.find(sub);
                    cur.erase(pos,sub.size());
                }
                if(cur.size() == 0)
                {
                    string nn = str1;
                    while(nn.find(sub) != string::npos)
                    {
                        size_t pos = nn.find(sub);
                        nn.erase(pos,sub.size());
                    }
                    if(nn.size() == 0)
                        ans = sub; 
                }
                cur = str2;
            }
        }
        else
        {
            cur = str1;
            string sub = "";
            for(int i=0;i<l2;i++)
            {
                sub += str2[i];
                while(cur.find(sub) != string::npos)
                {
                    size_t pos = cur.find(sub);
                    cur.erase(pos,sub.size());
                }
                if(cur.size() == 0)
                {
                    string nn = str2;
                    while(nn.find(sub) != string::npos)
                    {
                        size_t pos = nn.find(sub);
                        nn.erase(pos,sub.size());
                    }
                    if(nn.size() == 0)
                        ans = sub; 
                }
                cur = str1;
            }
        }
        return ans;
    }
};
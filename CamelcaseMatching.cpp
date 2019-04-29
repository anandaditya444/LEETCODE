//Q.1023

class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int n = queries.size();
        int cntp = 0;
        for(auto x:pattern)
        {
            if(isupper(x))
                cntp++;
        }
    
        vector<bool>v(n,true);
        
        for(int i=0;i<n;i++)
        {
            int cntq = 0;
            for(auto x:queries[i])
            {
                if(isupper(x))
                    cntq++;
            }
            if((pattern.length() > queries[i].length()) || (cntp != cntq))
            {
                v[i] = false;
                continue;   
            }
            size_t pos = -1;
            for(int j=0;j<pattern.length();j++)
            {
                int ch = pattern[j];
                pos = queries[i].find(ch,pos+1);
                if(pos == string::npos)
                {
                    v[i] = false;
                    break;
                }
               queries[i][pos] = '?';
            }
            for(int j=pos+1;j<queries[i].length();j++)
            {
                if(isupper(queries[i][j]))
                {
                    v[i] = false;
                    break;
                }
            }
        }
        return v;
            
    }
};
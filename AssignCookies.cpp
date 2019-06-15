//Q. 455

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& c) {
        sort(g.begin(),g.end());
        sort(c.begin(),c.end());
        
        int gptr = 0,cptr = 0,cnt = 0;
        int gn = g.size(),cn = c.size();
        while(gptr < gn)
        {
            if(cptr < cn)
            {
                if(c[cptr] >= g[gptr])
                {
                    gptr++,cptr++,cnt++;
                }
                else
                {
                    cptr++;
                }         
            }
            else
                break;
        }
        return cnt;
    }
};
//Q. 997

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N == 1)
            return 1;
        map<int,int>m;
        for(auto x:trust)
        {
            int ff = x[0];
            int ss = x[1];
            m[ff]--;
            m[ss]++;
        }
        for(auto x:m)
        {
            if(x.second == N-1)
                return x.first;
        }
        return -1;
    }
};
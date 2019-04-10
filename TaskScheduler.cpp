621. Task Scheduler

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int sz = tasks.size();
        unordered_map<char,int>m;
        int count = 0;
        for(auto &x:tasks)
        {
            m[x]++;
            count = max(count,m[x]);   
        }
        int ans = (count-1)*(n+1);
        for(auto &x:m)
        {
            if(x.second == count)
                ans++;
        }
            
        return max(ans,sz);
    }
};
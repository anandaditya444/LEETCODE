//Q. 134

//O(n^2) approach

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        for(int i=0;i<n;i++)
        {
            int cur = gas[i]-cost[i];
            if(cur < 0)
                continue;
            int idx = i;
            while(cur >= 0)
            {
                cur += gas[(idx+1)%n];
                cur -= cost[(idx+1)%n];
                if(i == ((idx+1)%n))
                    return i;
                idx++;
            }
        }
        return -1;
    }
};
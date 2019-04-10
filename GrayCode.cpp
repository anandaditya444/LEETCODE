89. Gray Code

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>v(1<<n);
       for(int i=0;i<(1<<n);i++)
       {
           v[i] = i^(i>>1);
       }
        return v;
    }
};
//#define int long long int 
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int n = A.size();
        vector<bool>v;
        int num = 0;
        for(int i=0;i<n;i++)
        {
           num = (2*num+A[i])%5; 
            if(num == 0)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};
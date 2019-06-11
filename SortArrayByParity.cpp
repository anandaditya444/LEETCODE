//Q. 905

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n = A.size();
        vector<int>ans(n);
        //O(nlogn) approach
       // sort(A.begin(),A.end(),[&](int a,int b){ return (a%2 < b%2);});

        //O(n) approach
        int t = 0;
        for(int i=0;i<n;i++)
        {
            if(A[i]%2 == 0)
                ans[t++] = A[i];
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]%2 == 1)
                ans[t++] = A[i];
        }
        return ans;
    }
};
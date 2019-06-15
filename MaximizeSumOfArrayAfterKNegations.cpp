//Q. 1005

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int n = A.size();
        int zeroflag = 0;
        int mn = 1000;
        int sum = 0;
        sort(A.begin(),A.end());
        for(int i=0;i<n;i++)
        {
            if(A[i] == 0)
                zeroflag = 1;
            if(K > 0)
            {
                if(A[i] < 0)
                {
                    A[i] = -A[i];
                    K--;   
                }
            }
            sum += A[i];
            mn = min(mn,abs(A[i]));
        }

        int dec = 0;
        if(K > 0)
        {
            K = K%2;
            if(K == 1)
            {
                if(zeroflag)
                {}
                else
                {
                    sum -= 2*mn; 
                }
            }
        }
        return sum;
    }
};
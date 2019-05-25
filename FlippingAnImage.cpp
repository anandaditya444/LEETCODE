//Q. 832

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int r = A.size();
        int c = A[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int start=0,end=c-1;start<=end;start++,end--)
            {
                swap(A[i][start],A[i][end]);
                if(start == end)
                {
                    A[i][start] = A[i][start] ? 0 : 1; 
                }
                else
                {
                    A[i][start] = A[i][start] ? 0 : 1;
                    A[i][end] = A[i][end] ? 0 : 1;
                }
            }
        }
        return A;
    }
};

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
   
        for(auto &x:A)
        {
            reverse(x.begin(),x.end());
        }
        
        for(auto &x:A)
        {
            for(auto &c:x)
            {
                c ^= 1;   //for toggle the value take xor with 1.
            }
        }
        
        return A;
      
    }
};
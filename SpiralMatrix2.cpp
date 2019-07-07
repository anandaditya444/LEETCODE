//Q. 59

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> >ans(n,vector<int>(n));
        if(n == 0)
            return ans;
        int t = 0,b = n-1,l = 0,r = n-1;
        int dir = 0;
        int no = 1;
       while(t <= b && l <= r)
       {
           if(dir == 0)
           {
               for(int i=l;i<=r;i++)
               {
                   ans[t][i] = no;
                   no++;
               }    
               t++;
               dir = 1;
           }
           else if(dir == 1)
           {
               for(int i=t;i<=b;i++)
               {
                   ans[i][r] = no;
                   no++;
               }
               r--;
               dir = 2;
           }
           else if(dir == 2)
           {
               for(int i=r;i>=l;i--)
               {
                   ans[b][i] = no;
                   no++;
               }
               b--;
               dir = 3;
           }
           else if(dir == 3)
           {
               for(int i=b;i>=t;i--)
               {
                   ans[i][l] = no;
                   no++;
               }
               l++;
               dir = 0;
           }
       }
        return ans;
   
    }
};

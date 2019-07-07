//Q. 54

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        if(matrix.size() == 0)
            return res;
        int t = 0,b = matrix.size()-1,l = 0,r = matrix[0].size()-1;
        int dir = 0;
        
       while(t <= b && l <= r)
       {
           if(dir == 0)
           {
               for(int i=l;i<=r;i++)
               {
                   res.push_back(matrix[t][i]);
               }    
               t++;
               dir = 1;
           }
           else if(dir == 1)
           {
               for(int i=t;i<=b;i++)
               {
                   res.push_back(matrix[i][r]);
               }
               r--;
               dir = 2;
           }
           else if(dir == 2)
           {
               for(int i=r;i>=l;i--)
               {
                   res.push_back(matrix[b][i]);
               }
               b--;
               dir = 3;
           }
           else if(dir == 3)
           {
               for(int i=b;i>=t;i--)
               {
                   res.push_back(matrix[i][l]);
               }
               l++;
               dir = 0;
           }
       }
        return res;
    }
};
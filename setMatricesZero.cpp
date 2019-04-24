//O(MxN) - Time Complexity
//O(M+N) - Space Complexity

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<pair<int,int> >v;
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j] == 0)
                    v.push_back(make_pair(i,j));
            }
        }
        
        for(int i=0;i<v.size();i++)
        {
            int row = v[i].first;
            int col = v[i].second;
            for(int j=0;j<c;j++)
            {
                matrix[row][j] = 0;
            }
            for(int k=0;k<r;k++)
            {
                matrix[k][col] = 0;
            }
        }
    }
};

//O((NxM)x(M+N)) - Time complexity
//O(1) - Space Complexity
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int k=0;k<c;k++)
                    {
                        if(matrix[i][k] != 0)
                            matrix[i][k] = 1e9;
                    }
                    for(int k=0;k<r;k++)
                    {
                        if(matrix[k][j] != 0)
                            matrix[k][j] = 1e9;
                    }
                }
            }
        }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j] == 1e9)
                {
                   matrix[i][j] = 0;
                }
            }
        }
    }
};
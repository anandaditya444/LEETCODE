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
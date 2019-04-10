class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n = obstacleGrid[0].size();
        int m = obstacleGrid.size();
        if(obstacleGrid[0][0] == 1)
            return 0;
        obstacleGrid[0][0] = 1;
        for(int i=1;i<n;i++)  //setting up first row
        {
            obstacleGrid[0][i] = (obstacleGrid[0][i] == 0 ? obstacleGrid[0][i-1] : 0);
        }
        for(int i=1;i<m;i++)  //setting up first column
        {
            obstacleGrid[i][0] = (obstacleGrid[i][0] == 0 ? obstacleGrid[i-1][0] : 0);
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(obstacleGrid[i][j] == 0)
                    obstacleGrid[i][j] = obstacleGrid[i][j-1] + obstacleGrid[i-1][j];
                else
                    obstacleGrid[i][j] = 0;
            }
        }
        return obstacleGrid[m-1][n-1];
        
    }
};
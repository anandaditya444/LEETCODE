class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        vector<int>v;
        int r = matrix.size();
         if(r==0)
            return 0;
        int c = matrix[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        
        int start = 0;int end = v.size()-1;
        
        while(start <= end)
        {
            int mid = (start+end)/2;
            
            if(v[mid] == target)
                return true;
            else if(v[mid] > target)
                end = mid-1;
            else
                start = mid+1;
        }
        return false;
    }
};
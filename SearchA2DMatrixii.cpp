//384 ms time
//O(n*m)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        if(r == 0)
            return false;
        int c = matrix[0].size();
        if(c == 0)
            return false;
        
        for(int i=0;i<r;i++)
        {
            if(matrix[i][c-1] >= target)
            {
                for(int j=c-1;j>=0;j--)       //using linear search 
                {
                    if(matrix[i][j] == target)
                        return true;
                }
            }
        }
        return false;
    }
};

//104 ms time
//O(nlogm)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        if(r == 0)
            return false;
        int c = matrix[0].size();
        if(c == 0)
            return false;
        
        for(int i=0;i<r;i++)
        {
            if(matrix[i][c-1] >= target)
            {
                int lo = 0;
                int hi = c-1;
                
                while(lo <= hi)          //using binary search
                {
                    int mid = (lo+hi)/2;
                    if(matrix[i][mid] == target)
                        return true;
                    else if(matrix[i][mid] < target)
                        lo = mid+1;
                    else
                        hi = mid-1;
                }
            }
        }
        return false;
    }
};

//O(n+m)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        if(r == 0)
            return false;
        int c = matrix[0].size();
        if(c == 0)
            return false;
        
        int i=0, j = c-1;
        
        while(i < r && j >= 0)
        {
            if(matrix[i][j] == target)
                return true;
            else if(matrix[i][j] > target)
                j--;
            else
                i++;
        }
        
        return false;
    }
};
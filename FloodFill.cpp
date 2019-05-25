//Q. 733

class Solution {
public:
    int r,c;
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int prevColor)
    {
        if(sr < 0 || sc < 0 || sr > r || sc > c)
            return;
        if(image[sr][sc] == prevColor)
        {
            image[sr][sc] = newColor;
            dfs(image,sr-1,sc,newColor,prevColor);
            dfs(image,sr+1,sc,newColor,prevColor);
            dfs(image,sr,sc-1,newColor,prevColor);
            dfs(image,sr,sc+1,newColor,prevColor);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        r = image.size();
        c = image[0].size();
        r--,c--;
        int prevColor = image[sr][sc];
        if(prevColor != newColor)
            dfs(image,sr,sc,newColor,prevColor);
        
        return image;
    }
};
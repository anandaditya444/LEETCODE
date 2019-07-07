WORD SEARCH PROBLEM IN A 2D CHARACTER GRID.
ALGORITHM:

1. Check every cell, if the cell has first character, then recur one by one and try all 4 directions from that cell for a match.
2. Mark the position in the grid as visited and recur in the 4 possible directions.
3. After recurring, again mark the position as unvisited.
4. Once all the letters in the word is matched, return true.



class Solution {
public:
    
    bool dfs(vector<vector<char>>& board,int i,int j,string& word,int level)
    {
        int n = board.size();
        int m = board[0].size();
        if(!word.length() || word.length() == level)
            return true;
        if(i<0 || j<0 || i>=n || j>=m)
            return false;
        if(board[i][j] == word[level])
        {
            char c = board[i][j];
            board[i][j] = '*';  //mark the place as visited.
            bool res = dfs(board,i+1,j,word,level+1) || dfs(board,i-1,j,word,level+1) || dfs(board,i,j+1,word,level+1) || dfs(board,i,j-1,word,level+1); 
                board[i][j] = c;  //again mark as unvisited.
            return res;
        }
        else
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
       int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j] == word[0])
                {
                    if(dfs(board,i,j,word,0))
                        return true;
                }
            }
        }
        return false;
    }
};
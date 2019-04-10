class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int s1 = word1.length();
        int s2 = word2.length();
        int mat[s2+1][s1+1];
        
        for(int i=0;i<=s2;i++)
            mat[i][0] = i;
        for(int i=0;i<=s1;i++)
            mat[0][i] = i;
        for(int i=1;i<=s2;i++)
        {
            for(int j=1;j<=s1;j++)
            {
                if(word2[i-1] == word1[j-1])
                    mat[i][j] = mat[i-1][j-1];
                else
                    mat[i][j] = min(mat[i-1][j],min(mat[i][j-1],mat[i-1][j-1]))+1;
            }
        }
        return mat[s2][s1];
        
    }
};
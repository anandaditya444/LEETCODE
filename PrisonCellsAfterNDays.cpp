class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
      
        for(int i=(N-1)%14;i>=0;i--)
        {
            vector<int>fake(8,0);
            for(int j=1;j<7;j++)
            {
                fake[j] = cells[j-1] == cells[j+1] ? 1 : 0;
            }
            cells = fake;   
        }
        
        return cells;
    }
};
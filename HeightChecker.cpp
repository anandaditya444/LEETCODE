//Q. 1051

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ans;
        ans = heights;
        sort(ans.begin(),ans.end());
        int cnt = 0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i] != heights[i])
                cnt++;
        }
        return cnt;
    }
};
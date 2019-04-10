class Solution {
public:
    int maxArea(vector<int>& height) {
     
        int d1,d2,ans=-1;
        for(int i=0;i<height.size();i++)
        {
            for(int j=0;j<height.size();j++)
            {
                d1 = min(height[i],height[j]);
                d2 = abs(i-j);
                ans = max(d1*d2,ans);
            }
        }
        return ans;
    }
};
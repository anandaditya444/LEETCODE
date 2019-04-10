class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int n = points.size();
        map<int,vector<vector<int> > >v;
        vector<vector<int> >ans,res;
        for(int i=0;i<n;i++)
        {
            int dist = abs(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            vector<int>c = {points[i][0],points[i][1]};
            v[dist].push_back(c);
            //v[dist].push_back(points[i][1]);
          //  v.push_back({dist,{points[i][0],points[i][1]}});
        }
       // sort(v.begin(),v.end());
        for(auto x:v)
        {
            for(auto y:v[x.first])
                ans.push_back(y);
        }
        for(int i=0;i<K;i++)
            res.push_back(ans[i]);
        return res;
    }
};
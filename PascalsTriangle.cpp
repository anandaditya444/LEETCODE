//Q. 118

class Solution {
public:
    vector<vector<int>> generate(int n) {
     vector<vector<int> >v;
        vector<int>ans,cur;
        if(n == 0)
            return v;
        v.push_back({1});
        if(n == 1)
            return v;
        ans.push_back(1);
        ans.push_back(1);
        v.push_back(ans);
        if(n == 2)
            return v;
        if(n >= 3)
        {
            while(n >= 3)
            {
                cur.push_back(1);
                for(int i=1;i<ans.size();i++)
                {
                    cur.push_back(ans[i]+ans[i-1]);
                }
                cur.push_back(1);
                v.push_back(cur);
                ans = cur;
                cur.clear();
                n--;
            }
        }
        return v;
    }
};




class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> >v;
        vector<int>res;
        if(numRows == 0)
            return v;
        v.push_back({1});
        if(numRows == 1)
            return v;
        v.push_back({1,1});
        if(numRows == 2)
            return v;
        for(int i=3;i<=numRows;i++)
        {
            vector<int>cur;
            cur.push_back(1);
            for(int j=1;j<v[i-2].size();j++)
            {
                int val = v[i-2][j]+v[i-2][j-1];
                cur.push_back(val);
            }
            cur.push_back(1);
            v.push_back(cur);
        }
        return v;
    }
};
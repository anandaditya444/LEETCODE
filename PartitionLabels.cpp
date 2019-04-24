class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int>v(26,0);
        vector<int>ans;
        for(int i=0;i<S.size();i++)
            v[S[i]-'a'] = i;
        int maxidx = -1;
        int lastidx = 0;
        for(int i=0;i<S.size();i++)
        {
            maxidx = max(maxidx,v[S[i]-'a']);
            if(i == maxidx)
            {
                ans.push_back(maxidx-lastidx+1);
                lastidx = i+1;
            }
        }
        return v;
    }
};
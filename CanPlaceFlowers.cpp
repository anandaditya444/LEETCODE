class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        int sz = v.size();
         if(n == 0)
            return true;
        if(sz == 1 && !v[0] && n == 1)
            return true;
       
        int cnt = 0;
        for(int i=0;i<sz;i++)
        {
            if(i==0)
            {
                if(!v[i] && !v[i+1] && !v[i])
                    v[i] = 1,cnt++;
                continue;
            }
            if(i==sz-1)
            {
                if(!v[i] && !v[i-1] && !v[i])
                    v[i] = 1,cnt++;
                continue;
            }
            if(!v[i-1] && !v[i+1] && !v[i])
            {
                v[i] = 1;
                cnt++;
            }
        }
      //  cout<<cnt<<endl;
        return cnt>=n;
    }
};
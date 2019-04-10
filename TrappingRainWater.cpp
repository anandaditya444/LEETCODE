42. Trapping Rain water

//Brute Force Way O(n^2)

class Solution {
public:
    int trap(vector<int>&a) {
        int n = a.size();
        int ans = 0;
       for(int i=0;i<n;i++)
       {
           int max_left = 0,max_right = 0;
           for(int j=i;j>=0;j--)
           {
               max_left = max(max_left,a[j]);
           }
           for(int j=i;j<n;j++)
           {
               max_right = max(max_right,a[j]);
           }
           ans += min(max_left,max_right) - a[i];
       }
        return ans;
    }
};

//Dynamic Programming Way O(n)

class Solution {
public:
    int trap(vector<int>&a) {
        int n = a.size();
        if(n == 0)
            return 0;
        int ans = 0;
        int ll[n],rr[n];
        memset(ll,0,sizeof(ll));
        memset(rr,0,sizeof(rr));
        ll[0] = a[0];
        for(int i=1;i<n;i++)
        {
            ll[i] = max(ll[i-1],a[i]);
        }
        rr[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rr[i] = max(rr[i+1],a[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            ans += min(ll[i],rr[i])-a[i];
        }
       
        return ans;
    }
};

	
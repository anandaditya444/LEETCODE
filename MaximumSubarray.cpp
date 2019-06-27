//Q. 53

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
       int sum = nums[0],cur = 0;
        
        for(int i=0;i<n;i++)
        {
            cur += nums[i];
            sum = max(sum,cur);
            if(cur < 0)
                cur = 0;
        }
       return sum;
    }
};


#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {

  int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cur = 0,mx = 0;
    for(int i=0;i<n;i++)
    {
        cur += a[i];
        cur = max(0ll,cur);
        mx = max(mx,cur);
    }
    cout<<mx<<endl;
    
    return 0;
}
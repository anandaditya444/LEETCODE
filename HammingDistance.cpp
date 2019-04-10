class Solution {
public:
    int hammingDistance(int x, int y) {
        int binx[32],biny[32];
        memset(binx,0,sizeof(binx));
        memset(biny,0,sizeof(biny));
        int i=0,j=0;
        while(x > 0)
        {
            binx[i] = x%2;
            x /= 2;
            i++;
        }
        while(y > 0)
        {
            biny[j] = y%2;
            y /= 2;
            j++;
        }
        int cnt = 0;
        for(int k=0;k<=max(i-1,j-1);k++)
        {
            if(binx[k] != biny[k])
                cnt++;
        }
        return cnt;
    }
};
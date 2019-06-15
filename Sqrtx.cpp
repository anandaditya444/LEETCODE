//Q. 69

#define int unsigned long long int
class Solution {
public:
    int mySqrt(int x) {
        // int i = 0;
        // for(i=0;i*i<=x;i++)
        // {}
        // return i-1;
        if(x == 0)
            return 0;
        if(x == 1)
            return 1;
        int  lo = 0,hi = x/2+1;
        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
         
            if(mid*mid == x)
                return mid;
            else if(mid*mid > x)
                hi = mid-1;
            else
                lo = mid+1;
        }
        return hi;
    }
};
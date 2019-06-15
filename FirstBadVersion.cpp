//Q. 278

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 1,hi = n;
        while(lo <= hi)
        {
            int mid = lo+(hi-lo)/2;
            if(isBadVersion(mid) && !isBadVersion(mid-1))
                return mid;
            if(isBadVersion(mid))
                hi = mid-1;
            else
                lo = mid+1;
        }
        return hi;
    }
};
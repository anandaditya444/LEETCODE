//Q. 852

class Solution {
public:
    int binsearch(vector<int>&A)
    {
        int n = A.size();
        int lo = 0,hi = n-1;
        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
            if(A[mid] > A[mid-1] && A[mid] > A[mid+1])
                return mid;
            if(A[mid-1] > A[mid])
                hi = mid-1;
            else if(A[mid+1] > A[mid])
                lo = mid+1;
            else
                lo = mid+1;
        }
        return 0;
    }
    
    int peakIndexInMountainArray(vector<int>& A) {
        return binsearch(A);
    }
};
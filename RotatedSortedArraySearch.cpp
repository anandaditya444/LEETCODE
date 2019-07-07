int Solution::search(const vector<int> &A, int B) {
   int n = A.size();
   int lo = 0,hi = n-1;
   
   while(lo <= hi)
   {
       int mid = (hi+lo)/2;
       if(A[mid] == B)
            return mid;
       
       if(A[lo] <= A[mid])
       {
           if(B >= A[lo] && B <= A[mid])
           {
               hi = mid-1;
           }
           else
           {
               lo = mid+1;
           }
       }
       else if(A[mid] <= A[hi])
       {
           if(B >= A[mid] && B <= A[hi])
           {
               lo = mid+1;
           }
           else
           {
               hi = mid-1;
           }
       }
   }
   return -1;
}

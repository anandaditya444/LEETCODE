int Solution::titleToNumber(string A) {
   int ans = 0;
   int n = A.length();
   int cnt = 1;
   for(int i=0;i<n && cnt <= n;i++)
   {
       ans += pow(26,i)*(A[n-cnt]-'A'+1);
       cnt++;
   }
    
    return ans;
}

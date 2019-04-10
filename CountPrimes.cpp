Count Primes

class Solution {
public:
    bool isPrime(int n)
    {
        if (n <= 1) 
            return false; 
        if (n <= 3)
            return true; 
        if (n%2 == 0 || n%3 == 0)
            return false; 

        for (int i=5; i*i<=n; i=i+6) 
            if (n%i == 0 || n%(i+2) == 0) 
               return false; 

        return true; 
    }
    
    int countPrimes(int n) {
        if(n < 2)
            return 0;
       
        int cnt = 0;
        for(int i=2;i<n;i++)
            if(isPrime(i))
                cnt++;
        return cnt;
        // int sieve[n+1],ans[n+1];
        // fill(sieve+2,sieve+n+1,1);
        // for(int i=2;i<=n;i++)
        // {
        //     if(sieve[i])
        //     {
        //         for(int j=2;i*j<=n;j++)
        //             sieve[i*j] = 0;
        //     }
        // }
        // memset(ans,0,sizeof(ans));
        // for(int i=2;i<=n;i++)
        // {
        //     if(sieve[i])
        //         ans[i] += ans[i-1],ans[i]++;
        //     else
        //         ans[i] += ans[i-1];
        // }
        // return ans[n-1];
    }
};
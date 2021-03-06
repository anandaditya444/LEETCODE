//Q. 204 Count Primes

//180ms solution
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
        
    }
};

//40ms solution

class Solution {
public:
    int Sieve(int n)
    {
       int prime[n+5];
        fill(prime+2,prime+n+1,1);
        for(int i=2;i<=n;i++)
        {
            if(prime[i])
            {
                for(int j=2;i*j<=n;j++)
                {
                    prime[i*j] = 0;
                }
            }
        }
        int cnt = 0;
        for(int i=2;i<n;i++)
        {
            if(prime[i])
                cnt++;
        }
        return cnt;
    }
    
    int countPrimes(int n) {
        if(n < 2)
            return 0;
        int ans = Sieve(n);
        return ans;
       
    }
};
class Solution {
public:
    int binaryNum[32]; 
    int i = 0;
    void decToBinary(int n) 
    { 
        while (n > 0) { 
            binaryNum[i] = n % 2; 
            n = n / 2; 
            i++; 
        } 

        // printing binary array in reverse order 
        for (int j = i - 1; j >= 0; j--) 
            binaryNum[j] = !binaryNum[j]; 
    } 
    int bitwiseComplement(int N) {
        if(N == 0)
            return 1;
        decToBinary(N);
        int ans = 0;
        for(int j=0;j<=i-1;j++)
        {
            ans += binaryNum[j]*(1<<j);
        }
        return ans;
    }
};
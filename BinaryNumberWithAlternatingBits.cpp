class Solution {
public:
    bool hasAlternatingBits(int n) {
        int bin[32];
        int i=0;
        while(n > 0)
        {
            bin[i] = n%2;
            n /= 2;
            i++;
        }
        int ch = bin[i-1];
        for(int j=i-2;j>=0;j--)
        {
            if(bin[j] == ch)
                return false;
            ch = bin[j];
        }
        return true;
    }
};
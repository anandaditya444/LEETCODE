#define int long long int
class Solution {
public:
    int divide(int dividend, int divisor) {

            int quotient = 0;
            bool minus = false;
            if(dividend < 0 || divisor < 0)
                minus = true;
            if(dividend < 0 && divisor < 0)
                minus = false;
            dividend = abs(dividend);
            divisor = abs(divisor);
            while(dividend >= 0)
            {
                dividend -= divisor;
                quotient++;        
            }
           if(dividend < 0)
                quotient--;
           if(quotient > INT_MAX && minus)
                    return INT_MIN;
                else if(quotient > INT_MAX && !minus)
                    return INT_MAX;
        
            return minus?-quotient:quotient;
        
    }
};
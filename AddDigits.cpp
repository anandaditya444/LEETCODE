258. Add Digits

//O(1) solution below in terms of time as well as space

class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};

//O(n) solution below

class Solution {
public:
    int sumOfDigits(int n)
    {
        int sum = 0;
        while(n > 9)
        {
            sum += n%10;
            n /= 10;
        }
        sum += n;
        
        return sum;
    }
    
    int addDigits(int num) {
        while(num > 9)
        {
            num = sumOfDigits(num);
        }
        return num;
    }
};
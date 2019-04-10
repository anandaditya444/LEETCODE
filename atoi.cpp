#include<bits/stdc++.h>
using namespace std;
#define int long long int 
class Solution {
public:
    int myAtoi(string str) {
        if(str=="")
                return 0;
        int num = 0;
        bool minus = false,dig = false;
        char ch;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
                continue;
            if(str[i]=='.')
                return minus?-num:num;
            if(isdigit(str[i]))
            {
                num = num*10+str[i]-'0';
                dig = true;
            }
            if(str[i]=='-')
            {
                minus = true;
                ch = str[i];
            }
            if(isalpha(str[i]))
            {
                if(num>=INT_MIN && num<=INT_MAX && !dig)
                    return 0;
                if(num>=INT_MIN && num<=INT_MAX && dig && minus)
                     return -num;
                if(num>=INT_MIN && num<=INT_MAX && dig && !minus)
                    return num;
            }
        }
        if(-num < INT_MIN)
            return INT_MIN;
        if(num > INT_MAX)
            return INT_MAX;
        return minus?-num:num;
    }
};
//Q. 8

//Passed All Test cases

#define int long long int
class Solution {
public:
    int myAtoi(string str) {
        if(str=="")
                return 0;
        string word;
        vector<string>v;
        stringstream iss(str);
        
        while(iss >> word)
            v.push_back(word);
        int ans = 0;
        int i = 0;
        for(auto &it:v)
        {
            ans = 0;
            int cnt = 0;
            bool neg = false;
            if(isdigit(it[i]) || it[i] == '+' || it[i] == '-')
            {
                if(it[i] == '-')
                        neg = true;
                if((it[i] == '+' || it[i] == '-') && isdigit(it[i+1]))
                {
                    while(!isdigit(it[i]) && i < it.length())
                    {
                        i++,cnt++;  
                    }
                    if(i >= it.length())
                          return 0;
                    if(cnt > 1)
                        neg = false;
                }
                while(isdigit(it[i]) && i < it.length())
                {
                    ans = ans*10+(it[i]-'0');
                    if(ans > INT_MAX)
                    {
                        if(neg)
                            return INT_MIN;
                        else
                            return INT_MAX;
                    }
                    i++;
                }
                if(neg)
                    ans = -ans;
                return ans;
            }
            else
                return 0;
        }
     return 0;                     
    }
};




//Passed 961 test cases

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
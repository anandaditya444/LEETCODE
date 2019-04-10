#include<bits/stdc++.h>
using namespace std;
vector<string>v;
char m[][10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
public:
   
    void printCombinations(char* in,char* out,int i,int j)
    {
        if(in[i]=='\0')
        {
            out[j] = '\0';
            v.push_back(out);
            return;
        }
        int digit = in[i]-'0';
        for(int k=0;m[digit][k]!='\0';k++)
        {
            out[j] = m[digit][k];
            printCombinations(in,out,i+1,j+1);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        v.clear();
        char out[10000];
        char in[10000];
        if(digits.size()==0)
            return v;
        for(int i=0;i<digits.length();i++)
            in[i] = digits[i];
        in[digits.length()]='\0';
        printCombinations(in,out,0,0);
        
        return v;
    }
};
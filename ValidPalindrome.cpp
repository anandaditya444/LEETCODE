125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        if(s == "")
            return true;
        string s1 = "",s2 = "";
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                s1 += tolower(s[i]);
            }
        }
        for(int i=s.length()-1;i>=0;i--)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                s2 += tolower(s[i]);
            }
        }
       // cout<<s1<<" "<<s2<<endl;
        if(s1 == s2)
            return true;
        return false;
    }
};
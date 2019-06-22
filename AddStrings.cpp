//Q. 415

class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        if(len1 > len2)
            swap(num1,num2);
        string ans = "";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int carry = 0;
        for(int i=0;i<num1.size();i++)
        {
            int sum = (num1[i]-'0')+(num2[i]-'0')+carry;
            ans.push_back(sum%10+'0');
            carry = sum/10;
        }
        for(int i=num1.size();i<num2.size();i++)
        {
            int sum = (num2[i]-'0')+carry;
            ans.push_back(sum%10+'0');
            carry = sum/10;
        }
        if(carry)
            ans.push_back(carry+'0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};  
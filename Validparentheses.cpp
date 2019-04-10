20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
      stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
                st.push(')');
            else if(s[i] == '{')
                st.push('}');
            else if(s[i] == '[')
                st.push(']');
            else
            {
                if(st.size() == 0 || st.top() != s[i])
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty();
    }
};
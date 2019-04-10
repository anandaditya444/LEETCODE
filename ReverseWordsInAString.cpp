151. Reverse Words in a String

class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string word;
            stringstream iss(s);
            while (iss >> word)
              v.push_back(word);
        string str="";
        for(int i=v.size()-1;i>=0;i--)
        {
            str += v[i];           
            if(i > 0)
                str += ' ';
        }
        return str;
        // for(int i=0;i<s.length();i++)
        // {
        //     if((i==0 || i==s.length()-1) && s[i] == ' ')
        //     {}
        //        // str += "";
        //     else
        //         str += s[i];
        // }
        // cout<<str<<endl;
        // vector<string>v;
        // string n="";
        // for(int i=str.length()-1;i>=0;i--)
        // {
        //     if(str[i] == ' ')
        //     {
        //         reverse(n.begin(),n.end());
        //         v.push_back(n);
        //         n="";
        //     }
        //     else
        //         n += str[i];
        // }
        // reverse(n.begin(),n.end());
        // v.push_back(n);
        // string ans="";
        // for(int i=0;i<v.size();i++)
        // {
        //     if(i == v.size()-1)
        //         ans += v[i];
        //     else
        //         ans += v[i], ans+=" ";
        // }
        // return ans;
    }
};
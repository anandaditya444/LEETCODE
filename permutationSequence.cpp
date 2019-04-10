class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++)
            s+=to_string(i);
        if(k==1 || n==1)
            return s;
       // cout<<s<<endl;
        int cnt = 3;
        while(next_permutation(s.begin(),s.end()) && cnt<=k)
        {
            cnt++;
        }
        return s;
    }
};

//ANOTHER Solution
class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++)
            s+=to_string(i); //to_string is used to append integer character to a string.
        int cnt = 2;
        while(cnt<=k)
        {
            next_permutation(s.begin(),s.end());
            cnt++;
        }
        return s;
    }
};
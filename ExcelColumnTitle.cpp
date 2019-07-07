string Solution::convertToTitle(int A) {
    int n = A;
    vector<int>v;
    while(n > 0)
    {
        v.push_back(n%26);
        n /= 26;
    }
    string ans = "";
    for(int i=v.size()-1;i>=0;i--)
    {
        ans += v[i]+'A'-1;
    }
    return ans;
}

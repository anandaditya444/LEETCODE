class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int>m;
        vector<string>v;
        string word;
        for(int i=0;i<paragraph.size();i++)
        {
            if(isalpha(paragraph[i]))
                paragraph[i] = tolower(paragraph[i]);
            else
                paragraph[i] = ' ';
        }
        
        stringstream iss(paragraph);
        while(iss >> word)
            v.push_back(word);
        
        for(int i=0;i<v.size();i++)
            m[v[i]]++;
        for(int i=0;i<banned.size();i++)
            m[banned[i]] = 0;
        int ans = -1;
        string str;
        for(auto it=m.rbegin();it!=m.rend();it++)
            if(it->second != 0)
            {
                if(it->second > ans)
                {
                    str = it->first;
                    ans = it->second;
                }
            }
        return str;
    }
};
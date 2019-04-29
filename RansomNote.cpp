//Q.383

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m;
        for(auto x:magazine)
            m[x]++;
        for(auto x:ransomNote)
        {
            if(m[x] < 1)
                return false;
            m[x]--;
        }
        return true;
       // int l1 = ransomNote.length();
       //  int l2 = magazine.length();
       //  if(l1 > l2)
       //      return false;
       //  if(l1 == l2 && ransomNote != magazine)
       //      return false;
       //  size_t pos = -1;
       //  for(int i=0;i<l1;i++)
       //  {
       //      char ch = ransomNote[i];
       //      pos = magazine.find(ch,pos+1);
       //      if(pos == string::npos)
       //          return false;
       //      magazine[pos] = '?';
       //      //cout<<magazine<<endl;
       //  }
       //  return true;
    }
};
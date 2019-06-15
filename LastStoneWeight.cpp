//Q. 1046

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        multiset<int>m;
      
        for(auto x:stones)
            m.insert(x);
    
        while(m.size() > 1)
        {
            int y = *m.rbegin();
            m.erase(m.find(y)); //to delete/erase only one instance of y.
            int x = *m.rbegin();
            m.erase(m.find(x));
            if(x != y)
            {
               m.insert(y-x);
            }
   
        }
        
      if(m.size())
          return *m.begin();
        return 0;
    }
};
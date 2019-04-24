//Q.338

//O(n*size_of_integer)

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>v;
        v.push_back(0);
        
        for(int i=1;i<=num;i++)
        {
            int cnt = 0;
            int idx = i;
            while(idx > 0)
            {
                if(idx%2 == 1)
                    cnt++;
                idx /= 2;
            }
            v.push_back(cnt);
        }
        return v;
    }
};


//O(n) dp solution

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>v(num+1);
        v[0] = 0;
        
        for(int i=1;i<=num;i++)
            v[i] = v[i&(i-1)]+1;
        
        return v;
    }
};
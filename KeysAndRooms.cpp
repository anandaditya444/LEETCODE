//Q.841

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        if(n == 0)
            return false;
        vector<int>v(n,0);
        v[0] = 1;
        queue<int>q;
        for(auto x:rooms[0])
        {
            q.push(x); 
            v[x] = 1;
        }
            
        while(!q.empty())
        {
            int ele = q.front();
            for(auto x:rooms[ele])
            {
               if(!v[x])
               {
                   q.push(x);
                   v[x] = 1;   
               }            
            }
            q.pop();
        }
        // for(auto c:v)
        //     cout<<c<<" ";
        // cout<<endl;
        
       // int idx = -1;
        for(auto x:v)
        {
            if(x != 1)
                return false;
        }
        return true;
    }
};
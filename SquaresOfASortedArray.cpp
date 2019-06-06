//Q. 977

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int idx = 0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i] >= 0)
            {
                idx = i;
                break;
            }
        }
        //cout<<idx<<endl;
        vector<int>neg,pos;
        for(int i=idx-1;i>=0;i--)
        {
            neg.push_back(A[i]*A[i]);
        }
        
        for(int i=idx;i<A.size();i++)
        {
            pos.push_back(A[i]*A[i]);
        }
       
        vector<int>ans;
       priority_queue<int,vector<int>,greater<int> >pq;
        for(auto x:pos)
            pq.push(x);
        for(auto x:neg)
            pq.push(x);
        while(!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }
      return ans;            
    }
};
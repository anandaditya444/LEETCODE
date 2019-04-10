class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length() == 0 && B.length() == 0)
            return true;
        if(A.length() != B.length())
            return false;
        for(int i=0;i<A.length();i++)
        {
            A+=A[0];
            A.erase(A.begin());
           // cout<<A<<" ";
            if(A == B)
                return true;
        }
        return false;
    }
};
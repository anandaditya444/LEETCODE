81. Search in Rotated Sorted Array II

class Solution {
public:
    
    bool searchIn(vector<int>&a,int s,int e,int ele)
    {
        //ignoring duplicate values
        while(s < e && a[s] == a[s+1])
            s++;
        while(s < e && a[e] == a[e-1])
            e--;
        if(s > e)
            return false;
        int mid = (s+e)/2;
        if(a[mid] == ele)
            return true;
        if(a[mid] >= a[s])
        {
            if(ele >= a[s] && ele <= a[mid])
                return searchIn(a,s,mid,ele);
            else
                return searchIn(a,mid+1,e,ele);
        }
        else if(a[mid] <= a[e])
        {
            if(ele >= a[mid] && ele <= a[e])
                return searchIn(a,mid+1,e,ele);
            else
                return searchIn(a,s,mid,ele);
        }
        return false;
    }
    
    bool search(vector<int>&a, int ele) {
     
        int n = a.size();
        return searchIn(a,0,n-1,ele);
    }
};
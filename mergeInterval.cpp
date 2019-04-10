/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    
   static bool compare(Interval a,Interval b)
    {
        return a.start < b.start;
    }
    
    vector<Interval> merge(vector<Interval>& intervals) {
 
        vector<Interval>v;
        sort(intervals.begin(),intervals.end(),compare);
        int n = intervals.size();
        if(n==0)
            return v;
        v.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            if(intervals[i].start > v.back().end)
            {
                v.push_back(intervals[i]);
            }
            else
            {
               v.back().end = max(v.back().end,intervals[i].end);
            }
        }
        return v;
    }
};
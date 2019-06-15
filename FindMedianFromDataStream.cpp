//Q. 295

//O(nlogn) - Time Complexity
//O(n) - Space Complexity

class MedianFinder {
public:
    /** initialize your data structure here. */
    vector<int>v;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        v.push_back(num);
    }
    
    double findMedian() {
        sort(v.begin(),v.end());
        int n = v.size();
        
        return n&1 ? v[n/2] : (v[n/2-1] + v[n/2]) * 0.5;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */



//O(n) - Time Complexity
//O(n) - Space Complexity
//using insertion sort to insert number directly in correct place so 
//as to avoid sorting.

class MedianFinder {
public:
    /** initialize your data structure here. */
    vector<int>v;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(v.empty())
            v.push_back(num);
        else
            v.insert(lower_bound(v.begin(),v.end(),num),num);
    }
    
    double findMedian() {
        //sort(v.begin(),v.end());
        int n = v.size();
        
        return n&1 ? v[n/2] : (v[n/2-1] + v[n/2]) * 0.5;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */


//O(logn) - Time Complexity
//O(n) -Space Complexity

class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int>lo;
    priority_queue<int,vector<int>,greater<int>>hi;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        lo.push(num);
        hi.push(lo.top());
        lo.pop();
        
        if(lo.size() < hi.size())
        {
            lo.push(hi.top());
            hi.pop();
        }
    }
    
    double findMedian() {
        return lo.size() > hi.size() ? (double)lo.top() : (lo.top() + hi.top()) * 0.5;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
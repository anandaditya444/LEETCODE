//Q. 307

//764ms time

class NumArray {
public:
    vector<int>data,prev;
    int n;
    NumArray(vector<int>& nums) {
        data = nums;
        prev = nums;
        n = data.size();
        for(int i=1;i<n;i++)
            data[i] += data[i-1];
    }
    
    void update(int i, int val) {
        data = prev;
        data[i] = val;
        prev = data;
         for(int i=1;i<n;i++)
            data[i] += data[i-1];
    }
    
    int sumRange(int i, int j) {
        if(i == 0)
            return data[j];
        return data[j]-data[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
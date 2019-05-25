//Q.303

class NumArray {
public:
    vector<int>data;
    NumArray(vector<int>& nums) {
        data = nums;
        int n = data.size();
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
 * int param_1 = obj->sumRange(i,j);
 */
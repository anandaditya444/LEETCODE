88. Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i = m-1,j = n-1,pos = m+n-1;
        while(j >= 0)
        {
            nums1[pos--] = (i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--]);
        }
    }
};
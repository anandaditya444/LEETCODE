//Q. 108

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* ArrayToBST(vector<int>&nums,int start,int end)
    {
        if(start >= end)
            return NULL;
        int midIdx = (start+end)/2;
        TreeNode* node = new TreeNode(nums[midIdx]);
        node->left = ArrayToBST(nums,start,midIdx);
        node->right = ArrayToBST(nums,midIdx+1,end);
        
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start = 0;
        int end = nums.size();
        return ArrayToBST(nums,start,end);
    }
};
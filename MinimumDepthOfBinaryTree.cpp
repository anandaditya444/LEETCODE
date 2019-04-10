Minimum depth Of A Binary Tree

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
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int ls = minDepth(root->left);
        int rs = minDepth(root->right);
        
        return 1 + (min(ls,rs) ? min(ls,rs) : max(ls,rs));
    }
};
//Q. 897

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
    vector<int>v;
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL)
            return NULL;
        inorder(root);
       
        TreeNode* ans = new TreeNode(0);
        TreeNode* cur = ans;
        
        for(auto x:v)
        {
            cur->right = new TreeNode(x);
            cur = cur->right;
        }
        return ans->right;
    }
};
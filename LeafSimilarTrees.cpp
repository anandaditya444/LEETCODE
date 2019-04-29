//Q.872

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
    vector<int>v1,v2;
    void solve1(TreeNode* root)
    {
        if(!root->left && !root->right)
            v1.push_back(root->val);
        if(root->left)
            solve1(root->left);
        if(root->right)
            solve1(root->right);     
    }
    void solve2(TreeNode* root)
    {
        if(!root->left && !root->right)
            v2.push_back(root->val);
        if(root->left)
            solve2(root->left);
        if(root->right)
            solve2(root->right);     
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)
            return true;
        solve1(root1);
        solve2(root2);
        
        return v1==v2;
    }
};
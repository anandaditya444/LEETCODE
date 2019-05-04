//Q. 129

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
    int dfs(TreeNode* root,int curr)
    {
        if(root == NULL)
            return 0;
        int sum = curr*10+root->val;
        if(root->left == NULL && root->right == NULL)
            return sum;
        return dfs(root->left,sum) + dfs(root->right,sum);
    }
    
    int sumNumbers(TreeNode* root) {
        
        return dfs(root,0);
    }
};
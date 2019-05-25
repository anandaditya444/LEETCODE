//Q. 257

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
    void AllPaths(vector<string>&ans,TreeNode* root,string str)
    {
        if(!root->left && !root->right)
        {
            ans.push_back(str);
            return;   
        }
        if(root->left)
            AllPaths(ans,root->left,str+"->"+to_string(root->left->val));
        if(root->right)
            AllPaths(ans,root->right,str+"->"+to_string(root->right->val));
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(!root)
            return ans;
        string str=to_string(root->val);
        AllPaths(ans,root,str);
        
        return ans;
    }
};
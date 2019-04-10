102. Binary Tree Level Order Traversal

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
    vector<vector<int>>res;
    vector<int>out;
    
    void bfs(TreeNode* root)
    {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();
            if(f == NULL)
            {
                res.push_back(out);
                out.clear();
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                out.push_back(f->val);
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
        }
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL)
            return res;
        bfs(root);
        return res;
    }
};
zigzagLevelOrder traversal of binary Tree

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        int level = 1;
        while(!q.empty())
        {
            int sz = q.size();
            vector<int>cur(sz);
            for(int i=0;i<sz;i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(level == 1)
                    cur[i] = temp->val;
                if(level == 0)
                    cur[sz-i-1] = temp->val;
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(cur);
            level = !level;
        }
        return ans;
    }
};
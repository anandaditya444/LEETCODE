EASY TO UNDERSTAND LEVEL ORDER TRAVERSAL OF A BINARY TREE.

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
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz = q.size();
            vector<int>cur(sz);
            for(int i=0;i<sz;i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                cur[i] = temp->val;
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(cur);
        }
        return ans;
    }
};
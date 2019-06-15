//Q. 107

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> >v,cur;
        vector<int>ans;
        if(root == NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node == NULL)
            {
                v.push_back(ans);
                ans.clear();
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                ans.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            cur.push_back(v[i]);
        }
        return cur;
    }
};
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
      vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return ans;
      queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int node;
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            if(temp == NULL)
            {
                ans.push_back(node);
                q.pop();
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                node = temp->val;
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return ans;
    }
};
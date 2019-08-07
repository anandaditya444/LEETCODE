//Q. 637

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
    vector<double>v,ans;
    void bfs(TreeNode* root)
    {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* f = q.front();
            q.pop();
            if(f == NULL)
            {
                double avg = 0;
                for(auto &x:v)
                    avg += x;
                avg /= v.size();
                ans.push_back(avg);
                v.clear();
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                v.push_back(f->val);
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
        }
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        bfs(root);
        return ans;
    }
};
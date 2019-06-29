//Q. 113

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.

class Solution {
public:
    vector<vector<int> >ans;
    vector<int>v;
    void solve(TreeNode* root,int sum)
    {
        if(root == NULL)
            return;
        v.push_back(root->val);
        if(root->left == NULL && root->right == NULL)
        {
             int f = 0;
            for(int i=v.size()-1;i>=0;i--)
            {
                f += v[i];

            }
             if(f == sum)
                        ans.push_back(v);
        }
        solve(root->left,sum);
        solve(root->right,sum);
        v.pop_back(); 
       
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return ans;
        solve(root,sum);
        return ans;
    }
};
//Q. 437

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//FInd all k-sum paths

class Solution {
public:
    vector<int>v;
    int cnt = 0;
    void solve(TreeNode* root,int sum)
    {
        if(root == NULL)
            return;
        v.push_back(root->val);
        int f = 0;
        for(int i=v.size()-1;i>=0;i--)
        {
            f += v[i];
            if(f == sum)
                cnt++;
        }
        solve(root->left,sum);
        solve(root->right,sum);
        v.pop_back();
    }
    int pathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return 0;
        solve(root,sum);
        return cnt;
    }
};
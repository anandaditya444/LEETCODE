//Q. 993

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
    void solve(TreeNode* node,unordered_map<int,pair<int,int> >&m,int depth,int parent)
    {
        if(node == NULL)
            return;
        m[node->val] = {depth,parent};
        
        solve(node->left,m,depth+1,node->val);
        solve(node->right,m,depth+1,node->val);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL)
            return true;
        unordered_map<int,pair<int,int> >m;
        solve(root,m,0,-1);
        
        return m[x].first == m[y].first && m[x].second != m[y].second;
    }
};
//Q. 236

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//Time Complexity is O(N), where N is the number of nodes in the binary tree as in the worst case we have
// to visit all the nodes of the binary tree.
// Space Complexity is also O(N), that is the space reserved by recursion stack in the worst case i.e. in 
// case of skewed binary tree.

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     if(!root || root == p || root == q)
         return root;
     TreeNode* left = lowestCommonAncestor(root->left,p,q);
     TreeNode* right = lowestCommonAncestor(root->right,p,q);
        
    return !left ? right : !right ? left : root;
    }
};
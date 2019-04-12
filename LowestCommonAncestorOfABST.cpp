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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)
            return NULL;
        if(root->val < p->val && root->val < q->val)
            return lowestCommonAncestor(root->right,p,q);
        else if(root->val > p->val && root->val > q->val)
            return lowestCommonAncestor(root->left,p,q);
        
        return root;
    }
};

//Same Problem Geeksforgeeks
Node* LCA(Node *root, int n1, int n2)
{
   if(root == NULL)
        return root;
    if(n1 < root->data && n2 < root->data)
        return LCA(root->left,n1,n2);
    else if(n1 > root->data && n2 > root->data)
        return LCA(root->right,n1,n2);
    return root;
}
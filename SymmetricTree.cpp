101. Symmetric Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//RECURSIVE SOLUTION

class Solution {
public:
    bool helper(TreeNode *l,TreeNode* r)
    {
        if(!l && !r)
            return true;
        else if(!l || !r)
            return false;
        if(l->val != r->val)
            return false;
        return helper(l->left,r->right) && helper(l->right,r->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return helper(root->left,root->right);
    }
};


//ITERATIVE SOLUTION

 bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        TreeNode* t1;
        TreeNode* t2;
        queue<TreeNode*>q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty() && !q2.empty())
        {
            t1 = q1.front();
            t2 = q2.front();
            q1.pop(),q2.pop();
            if(!t1 && !t2)
                continue;
            else if(!t1 || !t2)
                return false;
            if(t1->val != t2->val)
                return false;
            q1.push(t1->left);
            q1.push(t1->right);
            q2.push(t2->right);
            q2.push(t2->left);
        }
        return true;
    }
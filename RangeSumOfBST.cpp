//Q.938

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
    int rangeSumBST(TreeNode* root, int L, int R) {
        //iterative
        if(root == NULL)
            return 0;
        int ans = 0;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            s.pop();
            if(temp != NULL)
            {
                if(temp->val >= L && temp->val <= R)
                    ans += temp->val;
                if(L < temp->val)
                    s.push(temp->left);
                if(R > temp->val)
                    s.push(temp->right);
            }
        }
        return ans;
        
        //recursive
        if(root == NULL)
            return 0;
        if(root->val > R)
            return rangeSumBST(root->left,L,R);
        else if(root->val < L)
            return rangeSumBST(root->right,L,R);
        return root->val+rangeSumBST(root->left,L,R)+rangeSumBST(root->right,L,R);
    }
};
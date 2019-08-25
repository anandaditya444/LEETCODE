//Q. 653

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
    vector<int>v;
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
          inorder(root);
        int i = 0,j = v.size()-1;
        while(i < j)
        {
            int sum = v[i]+v[j];
            if(sum == k)
                return true;
            else if(sum > k)
                j--;
            else
                i++;
        }
        return false;
    }
};


//Another Solution

class Solution {
public:
    set<int>s;
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL)
            return false;
        if(s.count(k-root->val))
            return true;
        s.insert(root->val);
        
        return findTarget(root->left,k) || findTarget(root->right,k);
    }
};
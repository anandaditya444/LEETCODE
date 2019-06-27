//Q. 105

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int in = inorder.size();
        return helper(inorder,preorder,0,in-1);   
    }
    int temp = 0;
    TreeNode* helper(vector<int>&in,vector<int>&pre,int s,int e)
    {
        if(s > e)
            return NULL;
        TreeNode* node = new TreeNode(pre[temp]);
        int pos = 0;
        for(int i=s;i<=e;i++)
        {
            if(pre[temp] == in[i])
            {
                pos = i;
                temp++;
                break;
            }
        }
        node->left = helper(in,pre,s,pos-1);
        node->right = helper(in,pre,pos+1,e);
        
        return node;
    }
        
};
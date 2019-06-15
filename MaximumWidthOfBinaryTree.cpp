//Q. 662

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/*We know that a binary tree can be represented by an array (assume the root begins from the position 
with index 1 in the array). If the index of a node is i, the indices of its two children are 2*i and 2*i + 1. 
The idea is to use two arrays (start[] and end[]) to record the the indices of the leftmost node and rightmost 
node in each level, respectively. For each level of the tree, the width is end[level] - start[level] + 1. 
Then, we just need to find the maximum width. */

#define int unsigned long long int
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<pair<TreeNode*,int> >q;
        q.push({root,1});
        int ans = 0;
        while(!q.empty())
        {
            int l = q.front().second,r = 1;
            for(int i=0,n=q.size();i<n;i++)
            {
                TreeNode* temp = q.front().first;
                r = q.front().second;
                q.pop();
                if(temp->left)
                    q.push({temp->left,2*r});
                if(temp->right)
                    q.push({temp->right,2*r+1});
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};
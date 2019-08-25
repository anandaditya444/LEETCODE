/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* solve(ListNode* head,ListNode* last)
    {
         if(head == last)
            return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast !=last && fast->next != last)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
       // return solve(head,fast);
        TreeNode* cur = new TreeNode(slow->val);
        cur->left = solve(head,slow);
        cur->right = solve(slow->next,last);
        
        return cur;
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        return solve(head,NULL);
    }
};
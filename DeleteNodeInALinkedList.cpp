//Q. 237

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*We can't really delete the node, but we can kinda achieve the same effect by instead 
removing the next node after copying its data into the node that we were asked to delete.*/

class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};
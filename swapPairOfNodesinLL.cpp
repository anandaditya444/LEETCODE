/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode*& head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode* temp = head;
        head = head->next;
        ListNode* flag = head->next;
        head->next = temp;
        temp->next = flag;
        while(temp->next && temp->next->next)
        {
            ListNode* prev = temp->next->next->next;
            ListNode* node = temp->next;
            temp->next = temp->next->next;
            temp->next->next = node;
            temp->next->next->next = prev;
            temp = temp->next->next;
        }
        return head;
    }
};
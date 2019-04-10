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
    
    int len(ListNode* head)
    {
        int cnt = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    
    ListNode* rotateRight(ListNode*& head, int k) {
        if(head == NULL)
            return NULL;
     ListNode* temp = head;
        int l = len(head);
        k=k%l;
        k=l-k;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next = head;
        
        int jumps = 1;
        ListNode* prev = NULL;
        while(jumps<=k)
        {
            prev = head;
            head = head->next;
            jumps++;
        }
        prev->next = NULL;
        return head;
    }
};
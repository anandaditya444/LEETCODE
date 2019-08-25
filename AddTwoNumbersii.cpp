//Q. 445

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
    ListNode* reverse(ListNode* head)
    {
        ListNode* cur = head;
        ListNode* prev = NULL;
        while(cur != NULL)
        {
            ListNode* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* a = reverse(l1);
        ListNode* b = reverse(l2);
        ListNode* cur = head;
        int carry = 0;
        while(a != NULL || b != NULL)
        {
            int x = a ? a->val : 0;
            int y = b ? b->val : 0;
            int sum = x + y + carry;
            cur->next = new ListNode(sum%10);
            carry = sum/10;
            cur = cur->next;
            if(a)
                a = a->next;
            if(b)
                b = b->next;
        }
        if(carry > 0)
            cur->next = new ListNode(carry);
        return reverse(head->next);
    }
};
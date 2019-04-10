//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
     int length_of_LL(ListNode*& head)
        {
            ListNode* temp = head;
            int len = 0;
            if(temp==NULL)
                return 0;
            while(temp!=NULL)
            {
                len++;
                temp=temp->next;
            }
            return len;
        }
    
    ListNode* removeNthFromEnd(ListNode*& head, int n) {
         
        int length = length_of_LL(head);
        if(n==length)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        if(n==1)
        {
            ListNode* temp = head;
            ListNode* prev = NULL;
            while(temp->next!=NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            delete temp;
            prev->next = NULL;
            return head;
        }
        int jumps = length-n;
        ListNode* temp=head;
        ListNode* prev = NULL;
        while(jumps--)
        {
            prev = temp;
            temp = temp->next;
           // jumps--;
        }
        prev->next = temp->next;
        delete temp;
        return head;
        
    }
};
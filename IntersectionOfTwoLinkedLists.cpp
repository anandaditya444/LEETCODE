//Q. 160
//Move cur1 (cur2) forward from headA (headB) and loop back to headB (headA), 
//eventually cur1 and cur2 will meet at the intersection point or nullptr.

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      if(headA == NULL  || headB == NULL)
          return NULL;

        ListNode* tempA = headA;
        ListNode* tempB = headB;
        
        while(tempA != tempB)
        {
            tempA = tempA ? tempA->next : headB;
            tempB = tempB ? tempB->next : headA;
        }
    return tempA;
    }
};
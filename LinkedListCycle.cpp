141. Linked List Cycle

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
    bool hasCycle(ListNode *head) {
        //O(1) space complexity
        if(head == NULL || head->next == NULL)
            return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow && fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(slow == fast)
                return true;
        }
        return false;

        //using hashmap
        set<ListNode*>s;
        while(head != NULL)
        {
            if(s.find(head) != s.end())
                return true;
            else
                s.insert(head);
            head = head->next;
        }
    }
};
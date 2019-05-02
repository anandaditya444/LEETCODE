//Q. 234

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
    bool isPalindrome(ListNode* head) {
        string s = "";
        while(head != NULL)
        {
            s += head->val;
            head = head->next;
        }
        int n = s.length();
        for(int i=0;i<n/2;i++)
        {
            if(s[i] != s[n-i-1])
                return false;
        }
        return true;
    }
};
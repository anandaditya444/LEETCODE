//Q. 23

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
    void insertAtTail(ListNode*&head,int data)
    {
        if(head==NULL)
        {
            head = new ListNode(data);
            return;
        }
        ListNode* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        ListNode* n = new ListNode(data);
        temp->next = n;
        n->next = NULL;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(auto x:lists)
        {
            while(x != NULL)
            {
                v.push_back(x->val);
                x = x->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* head = NULL;

        for(auto x:v)
        {
            insertAtTail(head,x);
        }
        
        return head;
    }
};
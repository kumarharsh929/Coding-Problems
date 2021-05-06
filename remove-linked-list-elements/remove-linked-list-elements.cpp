/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        ListNode *prev=NULL, *d=head;
        while(d)        
        {
           if(d->val==val)
           {
               if(prev==NULL)
                   head=d->next;
               else
                   prev->next=d->next;
           }
            else
                prev=d;
            d=d->next; 
        }
        return head;
    }
};
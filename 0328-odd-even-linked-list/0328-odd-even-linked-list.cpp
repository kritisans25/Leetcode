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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) return NULL; 
        ListNode* evenhead=NULL;
        ListNode* eventail=NULL;
        ListNode*oddhead=NULL;
        ListNode* oddtail=NULL;
        ListNode*curr=head;
        int pos=1;
        while(curr)
        {
            ListNode* nextnode=curr->next;
            curr->next=NULL;
            if(pos%2==1)
            {
                if(oddhead==NULL)
                {
                    oddhead=curr;
                    oddtail=curr;
                }
                else
                {
                    oddtail->next=curr;
                    oddtail=curr;
                }
            }
            else
            {
                if(evenhead==NULL)
                {
                    evenhead=curr;
                    eventail=curr;
                }
                else
                {
                    eventail->next=curr;
                    eventail=curr;
                }  
            }
            curr=nextnode;
            pos++;

        }       
        oddtail->next = evenhead;
        return oddhead;
    }
};
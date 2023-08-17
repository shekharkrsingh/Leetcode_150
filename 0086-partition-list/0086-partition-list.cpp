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
    ListNode* partition(ListNode* head, int x) {
        queue<ListNode*> q;
        ListNode* newHead=new ListNode(NULL);
        ListNode* pre=newHead;
        while(head!=NULL)
        {
            if(head->val>=x)
            {
                q.push(head);
                pre->next=head;
                head=head->next;
            }
            else
            {
                pre->next=head;
                pre=pre->next;
                head=head->next;
            }
        }
        while(!q.empty())
        {
            pre->next=q.front();
            q.pop();
            pre=pre->next;
        }
        pre->next=NULL;
        return newHead->next;
    }
};
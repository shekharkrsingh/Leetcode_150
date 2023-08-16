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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans=new ListNode(NULL);
        ListNode* node=ans;
        while(head!=NULL)
        {
            if(head->next!=NULL && head->val==head->next->val)
            {
                cout<<head->val<<endl;
                int temp=head->val;
                while(head->val==temp)
                {
                    head=head->next;
                    if(head==NULL)
                    break;
                }
            }
            else
            {
                cout<<"t"<<endl;
                node->next=head;
                node=node->next;
                head=head->next;
            }
        }
        node->next=NULL;
        return ans->next;
    }
};
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* node=new ListNode();
        ListNode* head=node;
        int t=0;
        while(1)
        {
            if(carry==0&&l1==NULL&&l2==NULL)
            {
                break;
            }
            
            int total=0;
            if(l1!=NULL)
            {
               total+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                total+=l2->val;
                l2=l2->next;
            }
            if(t==0)
            {
                head=node;
                t++;
            }
            total+=carry;
            node->next=new ListNode(total%10);
            carry=total/10;
            node=node->next;
           
            
            
        }
        return head->next;
    }
};
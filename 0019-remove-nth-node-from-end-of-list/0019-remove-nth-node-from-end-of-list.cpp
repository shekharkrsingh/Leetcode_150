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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode * node=head;
        while(node!=NULL)
        {
            cnt++;
            node=node->next;
        }
        // cout<<cnt<<endl;
        node=head;
        for(int i=1;i<=cnt;i++)
        {
            if(cnt-n==0)
            {
                return node->next;
            }
            if(i==cnt-n)
            {
                cout<<node->val;
                node->next=node->next->next;
                break;
            }
            node=node->next;

        }
        return head;
    }
};
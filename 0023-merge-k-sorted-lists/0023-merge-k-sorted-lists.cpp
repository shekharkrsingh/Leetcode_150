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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        ListNode* head=new ListNode();
        ListNode* node=head;
        int minVal=INT_MAX;
        while(1)
        {
            bool flag=false;
            minVal=INT_MAX;
            for(int i=0;i<n;i++)
            {
                if(lists[i]!=NULL)
                flag=true;
            } 
            if(!flag)
            break;
            int k=-1;
            for(int i=0;i<n;i++)
            {
                if(lists[i]!=NULL && lists[i]->val<minVal)
                {
                    minVal=lists[i]->val;
                    k=i;
                }
            }
            node->next=lists[k];
            lists[k]=lists[k]->next;
            node=node->next;
            node->next=NULL;
            
        }
        return head->next;
        
    }
};
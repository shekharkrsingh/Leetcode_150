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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * node=new ListNode(-1);
        ListNode* head=node;
        while(list1!=NULL || list2!=NULL)
        {
            if(list1!=NULL && list2!=NULL && list1->val<=list2->val)
            {
                ListNode* temp=list1->next;
                list1->next=NULL;
                node->next=list1;
                list1=temp;
                node=node->next;
                
            }else if(list1!=NULL && list2!=NULL && list1->val>list2->val)
            {
                ListNode* temp=list2->next;
                list2->next=NULL;
                node->next=list2;
                list2=temp;
                node=node->next;
            }else if(list1==NULL)
            {
                node->next=list2;
                break;
            }else{
                node->next=list1;
                break;
            }
        }
        return head->next;
    }
};
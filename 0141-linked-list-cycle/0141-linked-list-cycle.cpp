/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

bool check(ListNode * node, map<ListNode* , bool> &m)
{
    if(node==NULL)
    {
        return false;
    }
    if(m[node]==false)
    {
        m[node]=true;
        return  check(node->next, m);
    }else
    {
        return true;
    }
}





class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,bool> m;
        return check(head, m);      
    }
};
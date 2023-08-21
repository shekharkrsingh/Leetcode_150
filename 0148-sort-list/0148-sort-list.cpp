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
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);
        ListNode* curr = &dummy;
        
        while (left && right) {
            if (left->val < right->val) {
                curr->next = left;
                left = left->next;
            } else {
                curr->next = right;
                right = right->next;
            }
            curr = curr->next;
        }
        
        if (left)
            curr->next = left;
        else
            curr->next = right;
        
        return dummy.next;
    }
    
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* left = head;
        ListNode* right = slow->next;
        slow->next = nullptr;
        
        left = sortList(left);
        right = sortList(right);
        
        return merge(left, right);
    }
};

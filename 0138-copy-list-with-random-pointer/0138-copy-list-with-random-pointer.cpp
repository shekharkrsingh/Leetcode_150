/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* copy(Node * head, unordered_map<Node*, Node*> &mp)
    {
        if(head==NULL)
        return head;
        Node* node= new Node(head->val);
        mp[head]=node;
        node->next=copy(head->next, mp);
        return node;
    }
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp;
        Node* newHead=copy(head, mp);
        Node * node=newHead;
        while(head!=NULL)
        {
            node->random=mp[head->random];
            node=node->next;
            head=head->next;
        }
        return newHead;
    }
};
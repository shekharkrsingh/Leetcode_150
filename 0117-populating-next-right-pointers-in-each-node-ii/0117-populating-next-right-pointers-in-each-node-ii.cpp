/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:

    void tree(queue<Node*> &q)
    {
        if(q.front()==NULL)
        {
            cout<<'d'<<endl;
            return ;
        }
        bool flag=true;
        Node* pre;
        while(q.front()!=NULL)
        {
            if(flag)
            {
                flag=false;
                pre=q.front();
                if(q.front()->left!=NULL)
                {
                    q.push(q.front()->left);
                }
                if(q.front()->right!=NULL)
                {
                    q.push(q.front()->right);
                }
                q.pop();
                continue;
            }
            if(q.front()->left!=NULL)
            {
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL)
            {
                q.push(q.front()->right);
            }
            pre->next=q.front();
            pre->next->val;
            pre=q.front();
            q.pop();
        }
        q.pop();
        q.push(NULL);
        cout<<"t"<<endl;
        tree(q);

    }




    Node* connect(Node* root) {
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        tree(q);
        return root;
    }
};
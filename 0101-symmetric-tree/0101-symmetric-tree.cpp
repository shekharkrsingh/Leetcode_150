/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
bool check(TreeNode * node1, TreeNode * node2)
{
    if(node1==NULL && node2==NULL)
    {
        return true;
    }
    if((node1==NULL && node2!=NULL) || (node1!=NULL && node2==NULL))
    {
        return false;
    }
    if(node1->val==node2->val)
    {
        bool first=check(node1->right, node2->left);
        bool second=check(node1->left, node2->right);
        if(first==true && second==true)
        {
            return true;
        }
    }
    return false;
}







class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};
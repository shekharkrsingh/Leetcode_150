/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool lowest(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode* &anc)
    {
        if(root==NULL)
        return false;
        bool curr=false;
        bool left=false;
        bool right=false;
        if(root==p || root==q)
        curr=true;
        left=lowest(root->left, p, q, anc);
        right=lowest(root->right, p, q, anc);
        if((curr && left) || (curr && right) || (left && right))
        {
            anc=root;
            return false;
        }
        if(left || right || curr)
        return true;
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* anc=NULL;
        lowest(root, p, q, anc);
        return anc;
    }
};
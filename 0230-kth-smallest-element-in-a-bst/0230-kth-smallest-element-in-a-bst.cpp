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
class Solution {
public:
void BST(TreeNode* root, int &k, int &val)
    {
        if(root==NULL)
        return ;
        BST(root->left, k, val);
        k--;
        if(k==0)
        val=root->val;
        BST(root->right, k, val);
        
    }

    int kthSmallest(TreeNode* root, int k) {
        int val;
        BST(root, k, val);
        return val;
    }
};
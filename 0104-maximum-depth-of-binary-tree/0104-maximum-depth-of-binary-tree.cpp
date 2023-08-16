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
 int height(TreeNode * node)
 {
     if(node==NULL)
     {
         return 0;
     }
     int left=height(node->left);
     int right=height(node->right);
     return max(left,right)+1;
 }




class Solution {
public:
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};
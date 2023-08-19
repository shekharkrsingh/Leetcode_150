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
    void BST(TreeNode* root, vector<int> &minDif)
    {
        if(root==NULL)
        return ;
        minDif.push_back(root->val);
        BST(root->left, minDif);
        BST(root->right, minDif);
        
    }


    int getMinimumDifference(TreeNode* root) {
        vector<int> minDif;
        BST(root, minDif);
        sort(minDif.begin(), minDif.end());
        int n=minDif.size();
        int val=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            val=min(val, abs(minDif[i+1]-minDif[i]));
        }
        return val;
    }
};
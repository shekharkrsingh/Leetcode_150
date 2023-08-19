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

    void rightView( queue<TreeNode*> &q, vector<int> &ans)
    {
        if(q.front()==NULL)
        return;
        while(q.front()!=NULL)
        {
            TreeNode * element=q.front();
            q.pop();
            if(q.front()==NULL)
            ans.push_back(element->val);
            if(element->left!=NULL)
            q.push(element->left);
            if(element->right!=NULL)
            q.push(element->right);
        }
        q.pop();
        q.push(NULL);
        rightView(q, ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> ans;
        rightView(q, ans);
        return ans;
    }
};
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

    void solution(queue<TreeNode*> &q, vector<vector<int>> &v)
    {
        if(q.front()==NULL)
        return;
        vector<int> ans;
        while(q.front()!=NULL)
        {
            TreeNode* temp=q.front();
            q.pop();
            ans.push_back(temp->val);
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
        }
        q.pop();
        q.push(NULL);
        v.push_back(ans);
        solution(q, v);
    }



    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>> ans;
        solution(q, ans);
        return ans;
    }
};
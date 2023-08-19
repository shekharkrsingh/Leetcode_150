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
    void avg(queue<TreeNode*> &q, vector<double> &ans)
    {
        if(q.front()==NULL)
        return ;
        double sum=0;
        double cnt=0;
        while(q.front()!=NULL)
        {
            sum+=q.front()->val;
            cnt++;
            if(q.front()->left!=NULL)
            q.push(q.front()->left);
            if(q.front()->right!=NULL)
            q.push(q.front()->right);
            q.pop();
        }
        ans.push_back(sum/cnt);
        q.pop();
        q.push(NULL);
        avg(q, ans);

    }



    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode* > q;
        q.push(root);
        q.push(NULL);
        vector<double> ans;
        avg(q, ans);
        return ans;
    }
};
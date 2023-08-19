class Solution {
public:

    void solution(TreeNode* root, vector<int> &v)
    {
        if(root==NULL)
        return;
        solution(root->left, v);
        v.push_back(root->val);
        solution(root->right,v);
    }



    bool isValidBST(TreeNode* root) {
        vector<int> v;
        solution(root, v);
        int n=v.size();
        for(int i=1;i<n;i++)
        {
            if(v[i-1]>=v[i])
            return false;
        }
        return true;
    }
};
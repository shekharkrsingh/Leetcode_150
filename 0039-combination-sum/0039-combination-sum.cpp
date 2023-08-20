class Solution {
public:

    void solution(vector<int> can, int target, vector<int> num, vector<vector<int>> &ans, int idx)
    {
        if(target<0)
        return;
        if(target==0)
        {
            cout<<"r"<<endl;
            ans.push_back(num);
            return;
        }
        num.push_back(0);
        for(int i=idx;i<can.size();i++)
        {
            num[num.size()-1]=can[i];
            solution(can, target-can[i], num, ans, i);
        }
    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> num;
        solution(candidates, target, num, ans, 0);
        return ans;
    }
};
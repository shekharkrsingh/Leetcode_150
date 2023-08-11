class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n=intervals.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            if(i==0 || intervals[i][0]>ans[ans.size()-1][1])
            {
                ans.push_back({intervals[i][0], intervals[i][1]});
            }else
            {
                int t=ans.size();
                ans[t-1][1]=max(ans[t-1][1], intervals[i][1]);
            }
        }
        return ans;
    }
};
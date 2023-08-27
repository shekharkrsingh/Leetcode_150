class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size()-1;
        int m=triangle[n].size();
        vector<int> dp;
        for(int i=0;i<m;i++)
        {
            dp.push_back(triangle[n][i]);
        }
        m--;
        n--;
        while(n>=0)
        {
            for(int i=0;i<m;i++)
            {
                dp[i]=min(dp[i], dp[i+1])+triangle[n][i];
            }
            n--;
            m--;
        }
        return dp[0];
    }
};
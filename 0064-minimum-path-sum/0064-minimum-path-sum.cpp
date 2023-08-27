class Solution {
public:

    int pathSum(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if(i==0 && j==0)
        return grid[i][j];
        if(dp[i][j]!=-1)
        return dp[i][j];
        int up=INT_MAX;
        int down=INT_MAX;
        if(i-1>=0)
        up=pathSum(i-1, j, grid, dp);
        if(j-1>=0)
        down=pathSum(i, j-1, grid, dp);
        dp[i][j]=min(up, down)+grid[i][j];
        return dp[i][j];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m, vector<int> (n, -1));
        return pathSum(m-1, n-1, grid, dp);
    }
};
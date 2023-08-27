class Solution {
public:

    int uniquePath(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if(dp[i][j]!=-1)
        return dp[i][j];
        int up=0;
        int left=0;
        if(i-1>=0 && grid[i-1][j]==0)
        left=uniquePath(i-1, j, grid, dp);
        if(j-1>=0 && grid[i][j-1]==0)
        up=uniquePath(i, j-1, grid, dp);
        dp[i][j]=up+left;
        return up+left;

    }


    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[0][0])
        return 0;
        if(obstacleGrid[m-1][n-1])
        return 0;
        vector<vector<int>> dp(m+1, vector<int> (n+1, -1));
        dp[0][0]=1;
        return uniquePath(m-1, n-1, obstacleGrid, dp);
    }
};
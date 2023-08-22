class Solution {
public:

int stairs(int n, vector<int> &dp)
{
    if(n<0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int first=stairs(n-1, dp);
    int second=stairs(n-2, dp);
    dp[n]=first+second;
    return first+second;
}




    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        dp[0]=1;
        return stairs(n, dp);
    }
};
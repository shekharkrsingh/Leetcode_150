class Solution {
public:
    int solution(int amount, vector<int> coins, int n, vector<int> &dp)
    {
        if(amount==0)
        return 0;
        if(amount<0)
        return -1;
        if(dp[amount]!=INT_MAX)
        return dp[amount];
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int temp=solution(amount-coins[i], coins, n, dp);
            if(temp!=-1)
            {
               ans=min(ans, temp+1);
            }
        }
        if(ans==INT_MAX)
        {
            ans=-1;
        }
        dp[amount]=ans;
        return ans; 
    }






    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        return solution(amount, coins, coins.size(), dp);

    }
};
class Solution {
    int solution(int n, int m, string &s, string &t, vector<vector<int>> &dp)
    {
        if(m<0 && n<0)
        return 0;
        if(n<0 || m<0)
        return max(m, n)+1;
        if(dp[n][m]!=-1)
        return dp[n][m];
        int fir=0, sec=0, thi=0;
        if(s[n]==t[m])
        {
            dp[n][m]=solution(n-1, m-1, s, t, dp);
            return dp[n][m];
        }
        fir=solution(n, m-1, s, t, dp);
        sec=solution(n-1, m, s, t, dp);
        thi=solution(n-1, m-1, s, t, dp);
        dp[n][m]=min(fir, min(sec, thi))+1;
        return dp[n][m];
    }
public:
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        return solution(n-1, m-1, word1, word2, dp);
;    }
};
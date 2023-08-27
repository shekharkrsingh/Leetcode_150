class Solution {
public:
    bool interleave(int n1, int n2, int n3, string &s1, string &s2, string &s3, vector<vector<int>> &dp) {
        if (n3 < 0) {
            return n1 < 0 && n2 < 0;
        }
        if (dp[n1 + 1][n2 + 1] != -1) {
            return dp[n1 + 1][n2 + 1];
        }
        bool first = false;
        bool sec = false;
        if (n1 >= 0 && s1[n1] == s3[n3]) {
            first = interleave(n1 - 1, n2, n3 - 1, s1, s2, s3, dp);
        }
        if (n2 >= 0 && s2[n2] == s3[n3]) {
            sec = interleave(n1, n2 - 1, n3 - 1, s1, s2, s3, dp);
        }
        dp[n1 + 1][n2 + 1] = first || sec;
        return dp[n1 + 1][n2 + 1];
    }

    bool isInterleave(string s1, string s2, string s3) {
        int n1 = s1.length();
        int n2 = s2.length();
        int n3 = s3.length();
        if (n1 + n2 != n3) {
            return false;
        }
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
        return interleave(n1 - 1, n2 - 1, n3 - 1, s1, s2, s3, dp);
    }
};

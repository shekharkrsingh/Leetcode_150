class Solution {
public:
    void solution(int n, int op, int cl, string st, vector<string> &ans)
    {
        if(op==n && cl==n)
        {
            ans.push_back(st);
            return ;
        }
        if(op<n)
        solution(n, op+1, cl, st+'(', ans);
        if(op>cl)
        solution(n, op, cl+1, st+')', ans);

    }



    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string st="";
        solution(n, 0, 0, st, ans);
        return ans;
    }
};
class Solution {
public:
    bool solution(string s, string t, int idxt, int idxs)
    {
        if(idxs==-1)
        return true;
        if(idxt==-1)
        return false;
        if(s[idxs]==t[idxt])
        return solution(s, t, idxt-1, idxs-1);
        else
        return solution(s, t, idxt-1, idxs);
    }

    bool isSubsequence(string s, string t) {
        return solution(s, t, t.length()-1, s.length()-1);
    }
};
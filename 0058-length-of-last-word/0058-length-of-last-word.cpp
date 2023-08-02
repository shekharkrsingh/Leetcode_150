class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int cnt=0;
        int pre=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(cnt!=0)
                pre=cnt;
                cnt=0;
                continue;
            }
            cnt++;
        }
        if(cnt!=0)
        return cnt;
        return pre;
    }
};
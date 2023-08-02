class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]>64 && s[i]<91)
            {
                s[i]=s[i]+97-65;
                ans+=s[i];
                continue;
            }
            else if(s[i]>96 && s[i]<123)
            {
                ans+=s[i];
            }else if(s[i]>47 && s[i]<58)
            {
                ans+=s[i];
            }
            
        }
        for(int i=0;i<ans.length()/2;i++)
        {
            if(ans[i]!=ans[ans.length()-1-i])
            return false;
        }
        return true;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len=haystack.length();
        int len2=needle.length();
        int start=0;
        int end=len2;
        string s="";
        for(int i=0;i<len2;i++)
        {
            s+=haystack[i];
        }
        if(len2>len)
        {
            return -1;
        }
        while(end<=len)
        {
            if(s!=needle)
            {
                s.erase(0,1);
                s+=haystack[end];
                end++;
                start++;
            }else
            {
                return start;
            }
        }
        return -1;
    }
};
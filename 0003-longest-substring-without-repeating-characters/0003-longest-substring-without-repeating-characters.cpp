class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int n=s.length();
        int str=0;
        int end=0;
        int maxWidth=0;
        while(end<n)
        {
            if(map[s[end]]==0)
            {
                map[s[end]]++;
                maxWidth=max(maxWidth, end-str+1);
                end++;
            }
            else
            {
                map[s[str]]--;
                str++;
            }
        }
        return maxWidth;
    }
};
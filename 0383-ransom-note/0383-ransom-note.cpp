class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        int n=magazine.length();
        for(int i=0;i<n;i++)
        mp[magazine[i]]++;
        n=ransomNote.length();
        for(int i=0;i<n;i++)
        {
            if(mp[ransomNote[i]]>0)
            mp[ransomNote[i]]--;
            else
            return false;
        }
        return true;
    }
};
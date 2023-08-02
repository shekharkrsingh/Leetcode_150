class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        string s;
        int index=strs[0].length();
        string st=strs[0];
        for(auto i:st)
        {
            for(int j=0;j<size;j++)
            {
                if(strs[j].length()!=0&&strs[j][0]==i)
                {
                    strs[j]=strs[j].substr(1,strs[j].length());
                }else
                {
                    return s;
                }
            }
            s+=i;
        }
        return s;
        
    }
};
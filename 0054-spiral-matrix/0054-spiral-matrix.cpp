class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int rStr=0;
        int rEnd=n-1;
        int cStr=0;
        int cEnd=m-1;
        vector<int> ans;
        while(rEnd>=rStr && cEnd>=cStr)
        {
            for(int i=rStr;i<=rEnd;i++)
            {
                ans.push_back(matrix[cStr][i]);
            }
            cStr++;
            if(rEnd<rStr || cEnd<cStr)
            break;
            for(int j=cStr;j<=cEnd;j++)
            {
                ans.push_back(matrix[j][rEnd]);
            }
            rEnd--;
            if(rEnd<rStr || cEnd<cStr)
            break;
            for(int p=rEnd;p>=rStr;p--)
            {
                ans.push_back(matrix[cEnd][p]);
            }
            cEnd--;
            if(rEnd<rStr || cEnd<cStr)
            break;
            for(int q=cEnd;q>=cStr;q--)
            {
                ans.push_back(matrix[q][rStr]);
            }
            rStr++;
        }
        return ans;
    }
};
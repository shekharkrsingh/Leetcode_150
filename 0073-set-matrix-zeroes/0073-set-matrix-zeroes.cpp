class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> idx;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    idx.push_back(temp);
                }
            }
        }
        int k=idx.size();
        for(int i=0;i<k;i++)
        {
            int l=idx[i][0];
            int p=idx[i][1];
            for(int j=0;j<m;j++)
            {
                matrix[j][p]=0;
            }
            for(int j=0;j<n;j++)
            {
                matrix[l][j]=0;
            }
        }
    }
};
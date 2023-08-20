class Solution {
public:

    bool isPos(int clm, int row, int n, vector<vector<int>> arr)
    {
        for(int i=0;i<row;i++)
        {
            if(arr[i][clm]==1)
            return false;
        }
        int tempRow=row;
        int tempClm=clm;
        while(row>=0 && clm>=0)
        {
            if(arr[row][clm]==1)
            return false;
            row--;
            clm--;
        }
        while(tempRow>=0 && tempClm<n)
        {
            if(arr[tempRow][tempClm]==1)
            return false;
            tempRow--;
            tempClm++;
        }
        return true;
    }

    int nQueen(int n, int row, vector<vector<int>> arr)
    {
        if (row==n)
        return 1;
        int total=0;
        for(int i=0;i<n;i++)
        {
            cout<<isPos(i, row, n, arr)<<endl;
            if(isPos(i, row, n, arr))
            {
                arr[row][i]=1;
                total+=nQueen(n, row+1, arr);
                arr[row][i]=0;
            }
        }
        return total;
    }

    int totalNQueens(int n) {
        vector<vector<int>> arr(n, vector<int>(n, 0));
        return nQueen(n, 0, arr);
    }
};
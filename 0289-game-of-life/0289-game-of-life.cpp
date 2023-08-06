class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> ans(m, vector<int> (n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int cnt=0;
                if(j+1<n && board[i][j+1]==1)
                cnt++;
                if(j+1<n && i-1>=0 && board[i-1][j+1]==1)
                cnt++;
                if(j+1<n && i+1<m && board[i+1][j+1]==1)
                cnt++;
                if(j-1>=0 && board[i][j-1]==1)
                cnt++;
                if(j-1>=0 && i-1>=0 && board[i-1][j-1]==1)
                cnt++;
                if(j-1>=0 && i+1<m && board[i+1][j-1]==1)
                cnt++;
                if(i-1>=0 && board[i-1][j]==1)
                cnt++;
                if(i+1<m && board[i+1][j]==1)
                cnt++;
                if(board[i][j]==0 && cnt==3)
                {
                    ans[i][j]=1;
                    continue;
                }
                if(board[i][j]==1 && cnt<2)
                {
                    ans[i][j]=0;
                    continue;
                }
                if(board[i][j]==1 && cnt>3)
                {
                    ans[i][j]=0;
                    continue;
                }
                if(board[i][j]==1 &&(cnt>1 && cnt<4))
                {
                    ans[i][j]=1;
                }

            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                board[i][j]=ans[i][j];
            }
        }
    }
};
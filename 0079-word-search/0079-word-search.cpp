class Solution {
public:
    bool wordMatch(vector<vector<char>> board, int i, int j, int idx, int n, string word, int k, int p)
    {
        if(idx==n)
        return true;
        char temp=board[i][j];
        board[i][j]='_';
        bool left=false, right=false, up=false, down=false;
        if(j+1<p && board[i][j+1]==word[idx])
        {
            right=wordMatch(board, i, j+1, idx+1, n, word, k, p);

        }
        if(j-1>=0 && board[i][j-1]==word[idx])
        {
            left=wordMatch(board, i, j-1, idx+1, n, word, k, p);
        }
        if(i+1<k && board[i+1][j]==word[idx])
        {
            down=wordMatch(board, i+1, j, idx+1, n, word, k, p);
        }
        if(i-1>=0 && board[i-1][j]==word[idx])
        {
            up=wordMatch(board, i-1, j, idx+1, n, word, k, p);
        }
        board[i][j]=temp;
        if(left || right || up || down)
        return true;
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        unordered_map<char, bool> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[board[i][j]]=true;
            }
        }
        for(int i=0;i<word.size();i++)
        {
            if(!mp[word[i]])
            return false;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(word[0]==board[i][j])
                {
                    bool result=false;
                    result=wordMatch(board, i, j, 1, word.size(), word, n, m);
                    if(result)
                    return true;
                }
            }
        }
        return false;
    }
};
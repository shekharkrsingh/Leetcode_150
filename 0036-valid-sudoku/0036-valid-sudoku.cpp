class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        for(int i=0;i<n;i++)
        {
            unordered_map<char, int> mp;
            for(int j=0;j<n;j++)
            {
                if(board[i][j]!='.')
                {
                    if(mp[board[i][j]]==0)
                    {
                        mp[board[i][j]]++;
                    }
                    else{
                        cout<<"first"<<endl;
                        return false;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            unordered_map<char, int> mp;
            for(int j=0;j<n;j++)
            {
                if(board[j][i]!='.')
                {
                    if(mp[board[j][i]]==0)
                    {
                        mp[board[j][i]]++;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        cout<<"crosed"<<endl;
        for(int i=0;i<n;i=i+3)
        {
            for(int j=0;j<n;j=j+3)
            {
                unordered_map<char, int> mp;
                for(int p=i;p<i+3;p++)
                {
                    for(int q=j;q<j+3;q++)
                    {
                        if(board[q][p]!='.')
                        {
                            if(mp[board[q][p]]==0)
                            {
                                mp[board[q][p]]++;
                            }
                            else{
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
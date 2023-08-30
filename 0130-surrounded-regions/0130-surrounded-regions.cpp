class Solution {
public:
    void sol(int i, int j, int n, int m, vector<vector<char>>& board, vector<vector<bool>>& visited) {
        if (i < 0 || j < 0 || i >= n || j >= m || visited[i][j] || board[i][j] == 'X') {
            return;
        }
        
        visited[i][j] = true;
        
        sol(i + 1, j, n, m, board, visited);
        sol(i - 1, j, n, m, board, visited);
        sol(i, j + 1, n, m, board, visited);
        sol(i, j - 1, n, m, board, visited);
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && board[i][j] == 'O' && !visited[i][j]) {
                    sol(i, j, n, m, board, visited);
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == 'O' && !visited[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }

        vector<string> rows(numRows);
        int currentRow = 0;
        int direction = 1;  // 1 for moving down, -1 for moving up

        for (char c : s) {
            rows[currentRow] += c;

            // Change direction if at the top or bottom row
            if (currentRow == 0) {
                direction = 1;
            } else if (currentRow == numRows - 1) {
                direction = -1;
            }

            currentRow += direction;
        }

        string result;
        for (string row : rows) {
            result += row;
        }

        return result;
    }
};

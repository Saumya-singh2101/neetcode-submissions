class Solution {
public:
    bool checkRows(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> s;

            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                if (s.count(board[i][j]))
                    return false;

                s.insert(board[i][j]);
            }
        }
        return true;
    }

    bool checkColumns(vector<vector<char>>& board) {
        for (int j = 0; j < 9; j++) {
            unordered_set<char> s;

            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;

                if (s.count(board[i][j]))
                    return false;

                s.insert(board[i][j]);
            }
        }
        return true;
    }

    bool checkBoxes(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {

                unordered_set<char> s;

                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {

                        if (board[i][j] == '.') continue;

                        if (s.count(board[i][j]))
                            return false;

                        s.insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return checkRows(board) &&
               checkColumns(board) &&
               checkBoxes(board);
    }
};